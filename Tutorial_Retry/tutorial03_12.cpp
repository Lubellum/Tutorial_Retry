#include "tutorial.h"

void Tutorial03_12()
{
    int age = 0;

    std::cout << "年齢を入力してください\n";
    std::cin >> age;

    int livedDays = age * 365;

    std::cout << livedDays << "\n";
}