#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{

    int array[]{6, 3, 2, 9, 7, 1, 5, 4, 8 };
    int lengthOfArray{ static_cast<int>(std::size(array)) };


    for(int firstFor{ 0 }; firstFor < lengthOfArray-1; firstFor++)
        {


            for(int secondFor{ 0 }; secondFor < lengthOfArray - 1; secondFor++ )
                {

                   if (array[secondFor] > array[secondFor + 1])
                        {
                            std::swap(array[secondFor], array[secondFor + 1]);
                        }

                     for (int index{ 0 }; index < lengthOfArray; ++index)
                        {
                                std::cout << array[index] << ' ';
                        }
                        std::cout << '\n';

                }
           // std::swap(array[firstNumber], array[secondNumber]);
        }


    for (int index{ 0 }; index < lengthOfArray; ++index)
		std::cout << array[index] << ' ';

	std::cout << '\n';
    return 0;
}
