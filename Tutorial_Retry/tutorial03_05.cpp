#include "tutorial.h"

void Tutorial03_05()
{
    int x = 0;
    
    std::cout << "数字を入力してください\n";
    std::cin >> x;

    std::cout << "入力された値：" << x << "\n";
    std::cout << "2倍した値：" << x * 2 << "\n";
    std::cout << "3倍した値：" << x * 3 << "\n";
    std::cout << "4倍した値：" << x * 4 << "\n";
}