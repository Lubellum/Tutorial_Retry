#include "tutorial.h"

void JoudgeScore1(int aScore)
{
	if (aScore >= 60)
	{
		std::cout << "合格\n";
	}
	else
	{
		std::cout << "不合格\n";
	}
}

void JoudgeScore2(int aScore)
{
	if (aScore >= 80)
	{
		std::cout << "たいへんよくできました\n";
	}
	else if (aScore >= 60)
	{
		std::cout << "よくできました\n";
	}
	else
	{
		std::cout << "ざんねんでした\n";
	}
}

void JoudgeScore3(int aScore)
{
	if (aScore >= 80)
	{
		std::cout << "優\n";
	}
	else if (aScore >= 70)
	{
		std::cout << "良\n";
	}
	else if (aScore >= 60)
	{
		std::cout << "可\n";
	}
	else
	{
		std::cout << "不可\n";
	}
}

void Tutorial04_07()
{
    int score = 0;
	std::cin >> score;

	JoudgeScore1(score);
	JoudgeScore2(score);
	JoudgeScore3(score);
}