#include "tutorial.h"

void Tutorial04_01()
{
    int x = 0;
    int y = 0;

    std::cin >> x;
    std::cin >> y;

    if (x > y)
    {
        std::cout << "xはyより大きい。xは" << x << "。\n";
    }
    else if (x < y)
    {
        std::cout << "xはyより小さい\n";
    }
    else
    {
        std::cout << "xとyは同じ\n";
    }
}