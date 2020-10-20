#include <iostream>
#include "io.h"



int main()
{
    int valueOne{ readNumber( ) };

    int valueTwo{ readNumber( ) };

    int answer{ valueOne + valueTwo };

    writeAnswer(answer);


    return 0;
}

