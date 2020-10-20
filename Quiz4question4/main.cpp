#include "constants.h"
#include <iostream>

double heightOfTree()
{
    std::cout << "Enter height of your tower: ";
    double x{ 100 };
    std::cin >> x;
    return x;
}

void distancePassed(double x, double y)
{

    double distanceFallen{ constants::gravity * ((y*y)/2) };
    //std::cout << distanceFallen << '\n';
    double zeroZeroZero{ 0.0 };
    if( x - distanceFallen <= zeroZeroZero )
    {
        std::cout << "At " << y << "seconds, the ball is on the ground.\n";
    }
    else
    {
        std::cout << "At " << y << "seconds, the ball is at the height of: " << x - distanceFallen << " meters.\n";
    }
}

int main()
{
    double heightTower{ heightOfTree() };

    /* std::cout << "At 0 seconds, the ball is at height: " << heightTower << " meters!\n ";
    std::cout << "At 1 seconds, the ball is at height: " << heightTower - distancePassed(1.0) << " meters!\n ";
    std::cout << "At 2 seconds, the ball is at height: " << heightTower - distancePassed(2.0) << " meters!\n ";
    std::cout << "At 3 seconds, the ball is at height: " << heightTower - distancePassed(3.0) << " meters!\n ";
    std::cout << "At 4 seconds, the ball is at height: " << heightTower - distancePassed(4.0) << " meters!\n ";
    std::cout << "At 5 seconds, the ball is at height: " << heightTower - distancePassed(5.0) << " meters!\n ";*/


    std::cout << "At 0 seconds, the ball is at height: " << heightTower << " meters.\n";
    distancePassed(heightTower, 1.0);
    distancePassed(heightTower, 2.0);
    distancePassed(heightTower, 3.0);
    distancePassed(heightTower, 4.0);
    distancePassed(heightTower, 5.0);
    return 0;
}
