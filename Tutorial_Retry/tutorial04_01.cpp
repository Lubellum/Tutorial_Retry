#include "tutorial.h"

void Tutorial04_01()
{
    int x = 0;
    int y = 0;

    std::cin >> x;
    std::cin >> y;

    if (x > y)
    {
        std::cout << "x��y���傫���Bx��" << x << "�B\n";
    }
    else if (x < y)
    {
        std::cout << "x��y��菬����\n";
    }
    else
    {
        std::cout << "x��y�͓���\n";
    }
}