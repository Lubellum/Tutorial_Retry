#include "tutorial.h"

void Tutorial04_01()
{
    int x = 0;
    int y = 0;

    std::cin >> x;
    std::cin >> y;

    if (x > y)
    {
        std::cout << "x‚Íy‚æ‚è‘å‚«‚¢Bx‚Í" << x << "B\n";
    }
    else if (x < y)
    {
        std::cout << "x‚Íy‚æ‚è¬‚³‚¢\n";
    }
    else
    {
        std::cout << "x‚Æy‚Í“¯‚¶\n";
    }
}