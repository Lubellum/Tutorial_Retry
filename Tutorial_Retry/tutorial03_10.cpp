#include "tutorial.h"

void Tutorial03_10()
{
    int x = 0;
    int y = 0;

    std::cout << "数字を入力してください(1回目)\n";
    std::cin >> x;
    std::cout << "数字を入力してください(2回目)\n";
    std::cin >> y;

    std::cout << "\n";

    std::cout << "和：" << x + y << "\n";
    std::cout << "差：" << x - y << "\n";
    std::cout << "積：" << x * y << "\n";
    std::cout << "商：" << x / y << "\n";
    std::cout << "余：" << x % y << "\n";
 }