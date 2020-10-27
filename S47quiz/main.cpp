#include <iostream>

struct Ad                                   //making struct that will save data
{
   int adsShown;
   double percentageClicked;
   double averageMonneyPerAd;
};


void moneyEarned(Ad ad)           // everythin happens here we muliply all values
{
    std::cout << "You have earned: " << static_cast<int>(ad.adsShown) * static_cast<double>(ad.percentageClicked) * static_cast<double>(ad.averageMonneyPerAd) << '\n';
}


int main()
{
    Ad today;
    std::cout << "Enter how many ads there are on your website: ";
    std::cin >> today.adsShown;
    std::cout << "Enter percentage of ads that were clicked on your website: ";
    std::cin >> today.percentageClicked;
    today.percentageClicked/=100;
    std::cout << "Enter how many money you get for ads on your website: ";
    std::cin >> today.averageMonneyPerAd;

    moneyEarned(today);


    return 0;
}
