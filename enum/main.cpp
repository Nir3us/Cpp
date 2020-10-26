#include <iostream>


enum races
{
    races_orcs,
    races_goblins,
    races_trolls,
    races_ogres,
    races_skeletons
};

int main()
{
    races nir3us{ races_trolls };
    std::cout << nir3us << '\n';

    return 0;
}
