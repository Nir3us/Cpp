#include <iostream>
#include <array>
#include <ctime>
#include <random>
#include <algorithm>

enum class CardNumber
{
    rank_2,
    rank_3,
    rank_4,
    rank_5,
    rank_6,
    rank_7,
    rank_8,
    rank_9,
    rank_10,
    rank_Jack,
    rank_Queen,
    rank_King,
    rank_Ace,
    maxcard
};

enum class CardsSuits
{
    cards_hearts,
    cards_clubs,
    cards_diamonds,
    cards_spades,

    maxSuits
};

struct Card
{
    CardNumber rank{};
    CardsSuits suit{};
};

void printCard(const Card &x)
{
    switch (x.rank)
    {
            case CardNumber::rank_2:
            std::cout << "2";
            break;
            case CardNumber::rank_3:
            std::cout << "3";
            break;
            case CardNumber::rank_4:
            std::cout << "4";
            break;
            case CardNumber::rank_5:
            std::cout << "5";
            break;
            case CardNumber::rank_6:
            std::cout << "6";
            break;
            case CardNumber::rank_7:
            std::cout << "7";
            break;
            case CardNumber::rank_8:
            std::cout << "8";
            break;
            case CardNumber::rank_9:
            std::cout << "9";
            break;
            case CardNumber::rank_10:
            std::cout << "10";
            break;
            case CardNumber::rank_Jack:
            std::cout << "J";
            break;
            case CardNumber::rank_Queen:
            std::cout << "Q";
            break;
            case CardNumber::rank_King:
            std::cout << "K";
            break;
            case CardNumber::rank_Ace:
            std::cout << "A";
            break;
            default:
                std::cout << "?";
                break;
    }

    switch (x.suit)
    {
        case CardsSuits::cards_clubs:
        std::cout << "C";
        break;
        case CardsSuits::cards_hearts:
        std::cout << "H";
        break;
        case CardsSuits::cards_diamonds:
        std::cout << "D";
        break;
        case CardsSuits::cards_spades:
        std::cout << "S";
        break;
        default:
            std::cout << "?";
            break;
    }

}

char getCardSuit(int x)
{
     switch (x)
    {
        case 0:
        return 'C';
        break;
        case 1:
        return 'H';
        break;
        case 2:
        return 'D';
        break;
        case 3:
        return 'S';
        break;
        default:
            return '?';
            break;
    }
}

char getCardNumber(int x)
{
    switch (x)
    {
            case 0:
            return '2';
            break;
            case 1:
            return '3';
            break;
            case 2:
            return '4';
            break;
            case 3:
            return '5';
            break;
            case 4:
            return '6';
            break;
            case 5:
            return '7';
            break;
            case 6:
            return '8';
            break;
            case 7:
            return '9';
            break;
            case 8:
            return 'T';
            break;
            case 9:
            return 'J';
            break;
            case 10:
            return 'Q';
            break;
            case 11:
            return 'K';
            break;
            case 12:
            return 'A';
            break;
            default:
               return '?';
                break;
    }
}

using deck_type = std::array<Card, 52>;
using index_type = deck_type::size_type;

deck_type createDeck()
{
    deck_type deck{};

    index_type cardInLoop{ 0 };

    auto suits{ static_cast<int>(CardsSuits::maxSuits) };
    auto ranks{ static_cast<int>(CardNumber::maxcard) };

    for (int suit{0}; suit < suits; ++suit)
    {
        for (int rank{0}; rank < ranks; ++rank)
            {
            deck[cardInLoop].suit = static_cast<CardsSuits>(suit);
            deck[cardInLoop].rank = static_cast<CardNumber>(rank);
            ++cardInLoop;
            }
    }

  return deck;
}

void printDeck(const deck_type &x)
{
    for(const auto& card : x)
        {
            printCard(card);
            std::cout << ' ';
        }
        std::cout << '\n';
}

void shuffleDeck(deck_type& deck)
{
  static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

  std::shuffle(deck.begin(), deck.end(), mt);
}

int getCardValue(Card &x)
{
    switch (x.rank)
    {
            case CardNumber::rank_2:
            return 2;
            break;
            case CardNumber::rank_3:
            return 3;
            break;
            case CardNumber::rank_4:
            return 4;
            break;
            case CardNumber::rank_5:
            return 5;
            break;
            case CardNumber::rank_6:
            return 6;
            break;
            case CardNumber::rank_7:
            return 7;
            break;
            case CardNumber::rank_8:
            return 8;
            break;
            case CardNumber::rank_9:
            return 9;
            break;
            case CardNumber::rank_10:
            return 10;
            break;
            case CardNumber::rank_Jack:
            return 10;
            break;
            case CardNumber::rank_Queen:
            return 10;
            break;
            case CardNumber::rank_King:
            return 10;
            break;
            case CardNumber::rank_Ace:
            return 11;
            break;
            default:
                std::cout << "?";
                break;
    }
    return 34404;
}

int main()
{
    Card cardOne{CardNumber::rank_Jack, CardsSuits::cards_hearts};
    printCard(cardOne);
    std::cout << '\n';

    auto EpicDeck{createDeck()};

    printDeck(EpicDeck);
    std::cout << '\n';
    shuffleDeck(EpicDeck);

    printDeck(EpicDeck);
    std::cout << '\n';

    std::cout << getCardValue(cardOne) << '\n';

    return 0;
}
