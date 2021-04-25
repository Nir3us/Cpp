#include <fstream>
#include <iostream>

int main()
{

    std::ofstream outf{ "Sample.dat" };


    if (!outf)
    {

        std::cerr << "Uh oh, Sample.dat could not be opened for writing!" << std::endl;
        return 1;
    }


    outf << "This is line 1" << '\n';
    outf << "This is line 2" << '\n';

    return 0;


}
