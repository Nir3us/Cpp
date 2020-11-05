#include "constants.h"

#include <iostream>

void towerDive(double x)
{
        int firstFor{1};

    for( ; x >= 0;  firstFor++)
        {
                std::cout << "At " << firstFor << " seconds, the ball is at height:" << x << " meters\n";
                x = (x - ( (myConstants::gravity * firstFor * firstFor)/2));
        }

        std::cout << "At " << firstFor << " seconds, the ball is on the ground.\n";

}

int main()
{
    std::cout << "How high is your tower?";
    double towerHight{ };
    std::cin >> towerHight;

    towerDive(towerHight);


    return 0;
}
