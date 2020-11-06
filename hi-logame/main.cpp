#include <ctime>
#include <random>
#include <iostream>

namespace MyRandom
{

	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
}

int getRandomNumber(int min, int max)
{
	std::uniform_int_distribution die{ min, max };
	return die(MyRandom::mersenne);
}

int main()
{




   while(true)
        {

            std::cout << "Let's play a game.  I'm thinking of a number between 1 and 100.  You have 7 tries to guess what it is.\n";
            int randomNumber{getRandomNumber(1, 100)};



            for(int i{1}; i <= 7; i++)
                {
                    std::cout << "Guess #" << i << ": ";
                    int answear{ };
                    std::cin >> answear;

                    if(answear == randomNumber)
                    {
                        std::cout << "\t CONGRATULATION!!!\n"
                        "\t You have won!\n Would you like to play again(y/n)?";
                        char somethingButFirst{ };
                        std::cin >> somethingButFirst;
                         if( somethingButFirst == 'n' || somethingButFirst == 'N' )
                        {
                            std::cout << "Thanks for playing! Come back soon!\n";
                            exit(0);
                        }
                        else if( somethingButFirst == 'y' || somethingButFirst == 'Y' )
                        {
                            break;
                        }
                        else
                        {
                            std::cout << "Your input was wrong, reseting program!!!\n";
                            break;
                        }
                    }

                    if(answear < randomNumber)
                    {
                        std::cout << "Too small!\n";
                    }
                    else if( answear > randomNumber )
                    {
                        std::cout << "Too big!\n";
                    }


                    if(i == 7)
                    {
                        std::cout << "Too many tries Enter y to reset game and n to end program:";
                        char something{ };
                        std::cin >> something;
                        if( something == 'n' || something == 'N' )
                        {
                            std::cout << "Thanks for playing! Come back soon!\n";
                            exit(0);
                        }
                        else if( something == 'y' || something == 'Y' )
                        {
                            std::cout << " "<< "Proceeding!\n";
                        }
                        else
                        {
                            std::cout << "Your input was wrong, reseting program!!!\n";
                            break;
                        }
                    }
                }
        }


    return 0;
}

