#include "tutorial.h"

void JoudgeScore1(int aScore)
{
	if (aScore >= 60)
	{
		std::cout << "���i\n";
	}
	else
	{
		std::cout << "�s���i\n";
	}
}

void JoudgeScore2(int aScore)
{
	if (aScore >= 80)
	{
		std::cout << "�����ւ�悭�ł��܂���\n";
	}
	else if (aScore >= 60)
	{
		std::cout << "�悭�ł��܂���\n";
	}
	else
	{
		std::cout << "����˂�ł���\n";
	}
}

void JoudgeScore3(int aScore)
{
	if (aScore >= 80)
	{
		std::cout << "�D\n";
	}
	else if (aScore >= 70)
	{
		std::cout << "��\n";
	}
	else if (aScore >= 60)
	{
		std::cout << "��\n";
	}
	else
	{
		std::cout << "�s��\n";
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