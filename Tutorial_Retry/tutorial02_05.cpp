#include "tutorial.h"

void Tutorial02_05()
{
    int x, y, z;

    std::cout << "xに代入する値を入力してください\n";
    std::cin >> x;
    std::cout << "yに代入する値を入力してください\n";
    std::cin >> y;

    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";

    z = y;
    y = x;
    x = z;

    std::cout << "xとyの値を入れ替えた結果が以下です\n";

    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
}