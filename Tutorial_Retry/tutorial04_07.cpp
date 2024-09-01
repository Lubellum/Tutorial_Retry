#include "tutorial.h"

void JoudgeScore1(int aScore)
{
	if (aScore >= 60)
	{
		std::cout << "‡Ši\n";
	}
	else
	{
		std::cout << "•s‡Ši\n";
	}
}

void JoudgeScore2(int aScore)
{
	if (aScore >= 80)
	{
		std::cout << "‚½‚¢‚Ö‚ñ‚æ‚­‚Å‚«‚Ü‚µ‚½\n";
	}
	else if (aScore >= 60)
	{
		std::cout << "‚æ‚­‚Å‚«‚Ü‚µ‚½\n";
	}
	else
	{
		std::cout << "‚´‚ñ‚Ë‚ñ‚Å‚µ‚½\n";
	}
}

void JoudgeScore3(int aScore)
{
	if (aScore >= 80)
	{
		std::cout << "—D\n";
	}
	else if (aScore >= 70)
	{
		std::cout << "—Ç\n";
	}
	else if (aScore >= 60)
	{
		std::cout << "‰Â\n";
	}
	else
	{
		std::cout << "•s‰Â\n";
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