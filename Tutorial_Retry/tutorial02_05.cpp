#include "tutorial.h"

void Tutorial02_05()
{
    int x, y, z;

    std::cout << "x�ɑ������l����͂��Ă�������\n";
    std::cin >> x;
    std::cout << "y�ɑ������l����͂��Ă�������\n";
    std::cin >> y;

    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";

    z = y;
    y = x;
    x = z;

    std::cout << "x��y�̒l�����ւ������ʂ��ȉ��ł�\n";

    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
}