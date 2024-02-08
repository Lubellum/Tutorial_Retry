#include "tutorial.h"

void Tutorial03_07()
{
    int x = 0;
    int y = 0;
    std::cin >> x;
    std::cin >> y;

    int z1 = x / y;
    int z2 = x % y;

    std::cout << "¤F" << z1 << "\n";
    std::cout << "—]F" << z2 << "\n";
}