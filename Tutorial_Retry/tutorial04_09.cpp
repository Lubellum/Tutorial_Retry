#include "tutorial.h"

void OpenOrClose(int aDayOfWeek, int aMedicalTreatmentTime)
{
	// todo: 入力されたものが数値であるか、0〜6(0〜2)の範囲に収まっているかチェックする項目の作成

	switch (aDayOfWeek)
	{
	case 0:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "休診\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "休診\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "休診\n";
		}
		else
		{
			std::cout << "エラー\n";
		}
		break;

	case 1:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "診療可能\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "診療可能\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "診療可能\n";
		}
		else
		{
			std::cout << "エラー\n";
		}
		break;

	case 2:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "休診\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "診療可能\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "診療可能\n";
		}
		else
		{
			std::cout << "エラー\n";
		}
		break;

	case 3:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "診療可能\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "診療可能\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "休診\n";
		}
		else
		{
			std::cout << "エラー\n";
		}
		break;

	case 4:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "診療可能\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "診療可能\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "診療可能\n";
		}
		else
		{
			std::cout << "エラー\n";
		}
		break;

	case 5:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "休診\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "診療可能\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "診療可能\n";
		}
		else
		{
			std::cout << "エラー\n";
		}
		break;

	case 6:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "診療可能\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "休診\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "休診\n";
		}
		else
		{
			std::cout << "エラー\n";
		}
		break;

	default:
		break;
	}
}

void Tutorial04_09()
{
    int dayOfWeek = 0;
    int medicalTreatmentTime = 0;

	std::cout << ">0=日曜、1=月曜、2=火曜、3=水曜、4=木曜、5=金曜、6=土曜\n";
	std::cin >> dayOfWeek;

	std::cout << ">0=午前、1=午後、2=夜間\n";
	std::cin >> medicalTreatmentTime;

	OpenOrClose(dayOfWeek, medicalTreatmentTime);
}