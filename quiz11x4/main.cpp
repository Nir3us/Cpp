#include <algorithm>
#include <array>
#include <cassert>
#include <ctime>
#include <iostream>
#include <random>

constexpr int maximumScore{ 21 };

constexpr int minimumDealerScore{ 17 };

enum class CardSuit
{
  SUIT_CLUB,
  SUIT_DIAMOND,
  SUIT_HEART,
  SUIT_SPADE,

  MAX_SUITS
};

enum class CardRank
{
  RANK_2,
  RANK_3,
  RANK_4,
  RANK_5,
  RANK_6,
  RANK_7,
  RANK_8,
  RANK_9,
  RANK_10,
  RANK_JACK,
  RANK_QUEEN,
  RANK_KING,
  RANK_ACE,

  MAX_RANKS
};

class Card
{
private:
  CardRank m_rank{};
  CardSuit m_suit{};

public:
  void print() const
  {
    switch (m_rank)
    {
    case CardRank::RANK_2:
      std::cout << '2';
      break;
    case CardRank::RANK_3:
      std::cout << '3';
      break;
    case CardRank::RANK_4:
      std::cout << '4';
      break;
    case CardRank::RANK_5:
      std::cout << '5';
      break;
    case CardRank::RANK_6:
      std::cout << '6';
      break;
    case CardRank::RANK_7:
      std::cout << '7';
      break;
    case CardRank::RANK_8:
      std::cout << '8';
      break;
    case CardRank::RANK_9:
      std::cout << '9';
      break;
    case CardRank::RANK_10:
      std::cout << 'T';
      break;
    case CardRank::RANK_JACK:
      std::cout << 'J';
      break;
    case CardRank::RANK_QUEEN:
      std::cout << 'Q';
      break;
    case CardRank::RANK_KING:
      std::cout << 'K';
      break;
    case CardRank::RANK_ACE:
      std::cout << 'A';
      break;
    default:
      std::cout << '?';
      break;
    }

    switch (m_suit)
    {
    case CardSuit::SUIT_CLUB:
      std::cout << 'C';
      break;
    case CardSuit::SUIT_DIAMOND:
      std::cout << 'D';
      break;
    case CardSuit::SUIT_HEART:
      std::cout << 'H';
      break;
    case CardSuit::SUIT_SPADE:
      std::cout << 'S';
      break;
    default:
      std::cout << '?';
      break;
    }
  }

  int value() const
  {
    if (m_rank <= CardRank::RANK_10)
    {
      return (static_cast<int>(m_rank) + 2);
    }

    switch (m_rank)
    {
    case CardRank::RANK_JACK:
    case CardRank::RANK_QUEEN:
    case CardRank::RANK_KING:
      return 10;
    case CardRank::RANK_ACE:
      return 11;
    default:
      assert(false && "should never happen");
      return 0;
    }
  }

  Card() = default;

  Card(CardRank rank, CardSuit suit)
      : m_rank{ rank }, m_suit{ suit }
  {
  }
};

class Deck
{
public:
  using array_type = std::array<Card, 52>;
  using index_type = array_type::size_type;

private:
  array_type m_deck{};
  index_type m_cardIndex{ 0 };

public:
  void print() const
  {
    for (const auto& card : m_deck)
    {
      card.print();
      std::cout << ' ';
    }

    std::cout << '\n';
  }

  void shuffle()
  {
    static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

    std::shuffle(m_deck.begin(), m_deck.end(), mt);

    m_cardIndex = 0;
  }

  const Card& dealCard(void)
  {
    assert(m_cardIndex < m_deck.size());

    return m_deck[m_cardIndex++];
  }

  Deck()
  {
    index_type card{ 0 };

    auto suits{ static_cast<index_type>(CardSuit::MAX_SUITS) };
    auto ranks{ static_cast<index_type>(CardRank::MAX_RANKS) };

    for (index_type suit{ 0 }; suit < suits; ++suit)
    {
      for (index_type rank{ 0 }; rank < ranks; ++rank)
      {
        m_deck[card] = { static_cast<CardRank>(rank), static_cast<CardSuit>(suit) };
        ++card;
      }
    }
  }
};

class Player
{
private:
  int m_score{};

public:
  void drawCard(Deck& deck)
  {
    m_score += deck.dealCard().value();
  }

  int score() const
  {
    return m_score;
  }

  bool isBust() const
  {
    return (m_score > maximumScore);
  }
};

bool playerWantsHit()
{
  while (true)
  {
    std::cout << "(h) to hit, or (s) to stand: ";

    char ch{};
    std::cin >> ch;

    switch (ch)
    {
    case 'h':
      return true;
    case 's':
      return false;
    }
  }
}

bool playerTurn(Deck& deck, Player& player)
{
  while (true)
  {
    std::cout << "You have: " << player.score() << '\n';

    if (player.isBust())
    {
      return true;
    }
    else
    {
      if (playerWantsHit())
      {
        player.drawCard(deck);
      }
      else
      {
        return false;
      }
    }
  }
}

bool dealerTurn(Deck& deck, Player& dealer)
{
  while (dealer.score() < minimumDealerScore)
  {
    dealer.drawCard(deck);
  }

  return dealer.isBust();
}

bool playBlackjack(Deck& deck)
{
  Player dealer{};
  dealer.drawCard(deck);

  std::cout << "The dealer is showing: " << dealer.score() << '\n';

  Player player{};
  player.drawCard(deck);
  player.drawCard(deck);

  if (playerTurn(deck, player))
  {
    return false;
  }

  if (dealerTurn(deck, dealer))
  {
    return true;
  }

  return (player.score() > dealer.score());
}

int main()
{
  Deck deck{};

  deck.shuffle();

  if (playBlackjack(deck))
  {
    std::cout << "You win!\n";
  }
  else
  {
    std::cout << "You lose!\n";
  }

  return 0;
}
