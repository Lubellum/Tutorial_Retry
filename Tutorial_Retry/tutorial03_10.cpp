#include "tutorial.h"

void Tutorial03_10()
{
    int x = 0;
    int y = 0;

    std::cout << "��������͂��Ă�������(1���)\n";
    std::cin >> x;
    std::cout << "��������͂��Ă�������(2���)\n";
    std::cin >> y;

    std::cout << "\n";

    std::cout << "�a�F" << x + y << "\n";
    std::cout << "���F" << x - y << "\n";
    std::cout << "�ρF" << x * y << "\n";
    std::cout << "���F" << x / y << "\n";
    std::cout << "�]�F" << x % y << "\n";
 }