#include "tutorial.h"

std::string JoudgePlusOrMinus(int aNum)
{
    if (aNum >= 0)
    {
        std::string PlusOrMinus = "����";
        return PlusOrMinus;
    }
    else
    {
        std::string PlusOrMinus = "����";
        return PlusOrMinus;
    }
}

void Tutorial04_06_02()
{
    int num = 0;
    std::cin >> num;

    std::string PlusOrMinus = JoudgePlusOrMinus(num);

    if (num % 2 == 0)
    {
        std::cout << PlusOrMinus << "����\n";
    }
    else
    {
        std::cout << PlusOrMinus << "�\n";
    }
}