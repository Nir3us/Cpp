#include <fstream>
#include <iostream>
#include <string>

int main()
{

    std::ifstream inf{ "Sample.dat" };


    if (!inf)
    {

        std::cerr << "Uh oh, Sample.dat could not be opened for reading!" << std::endl;
        return 1;
    }


    while (inf)
    {

        std::string strInput;
        inf >> strInput;
        std::cout << strInput << '\n';
    }

    return 0;


}
