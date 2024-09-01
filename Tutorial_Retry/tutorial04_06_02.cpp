#include "tutorial.h"

std::string JoudgePlusOrMinus(int aNum)
{
    if (aNum >= 0)
    {
        std::string PlusOrMinus = "³‚Ì";
        return PlusOrMinus;
    }
    else
    {
        std::string PlusOrMinus = "•‰‚Ì";
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
        std::cout << PlusOrMinus << "‹ô”\n";
    }
    else
    {
        std::cout << PlusOrMinus << "Šï”\n";
    }
}