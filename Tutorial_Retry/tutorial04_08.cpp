#include "tutorial.h"

void JoudgeScore(int aMiddleScore, int aBottomScore)
{
    int totalScore = aMiddleScore + aBottomScore;

    if (aMiddleScore >= 60 && aBottomScore >= 60)
    {
        std::cout << "���i\n";
    }
    else if (totalScore >= 130)
    {
        std::cout << "���i\n";
    }
    else if (totalScore >= 100 && (aMiddleScore >= 90 || aBottomScore >= 90))
    {
        std::cout << "���i\n";
    }
    else
    {
        std::cout << "�s���i\n";
    }
}

void Tutorial04_08()
{
    int middleScore = 0;
    int bottomScore = 0;

    std::cin >> middleScore;
    std::cin >> bottomScore;

    JoudgeScore(middleScore, bottomScore);
}