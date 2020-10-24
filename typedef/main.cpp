#include <iostream>


int main()
{
    typedef double distance_t;
    distance_t oneKM{1.0};
    double twoKM{2.0};
    using distanceTwo_t = double;
    distanceTwo_t threeKM {3.0};
    std::cout << oneKM << " " << twoKM << " " << threeKM << '\n';



    return 0;
}
