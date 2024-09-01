#include "tutorial.h"

void OpenOrClose(int aDayOfWeek, int aMedicalTreatmentTime)
{
	// todo: “ü—Í‚³‚ê‚½‚à‚Ì‚ª”’l‚Å‚ ‚é‚©A0`6(0`2)‚Ì”ÍˆÍ‚Éû‚Ü‚Á‚Ä‚¢‚é‚©ƒ`ƒFƒbƒN‚·‚é€–Ú‚Ìì¬

	switch (aDayOfWeek)
	{
	case 0:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "‹xf\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "‹xf\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "‹xf\n";
		}
		else
		{
			std::cout << "ƒGƒ‰[\n";
		}
		break;

	case 1:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else
		{
			std::cout << "ƒGƒ‰[\n";
		}
		break;

	case 2:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "‹xf\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else
		{
			std::cout << "ƒGƒ‰[\n";
		}
		break;

	case 3:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "‹xf\n";
		}
		else
		{
			std::cout << "ƒGƒ‰[\n";
		}
		break;

	case 4:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else
		{
			std::cout << "ƒGƒ‰[\n";
		}
		break;

	case 5:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "‹xf\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else
		{
			std::cout << "ƒGƒ‰[\n";
		}
		break;

	case 6:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "f—Ã‰Â”\\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "‹xf\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "‹xf\n";
		}
		else
		{
			std::cout << "ƒGƒ‰[\n";
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

	std::cout << ">0=“ú—jA1=Œ—jA2=‰Î—jA3=…—jA4=–Ø—jA5=‹à—jA6=“y—j\n";
	std::cin >> dayOfWeek;

	std::cout << ">0=Œß‘OA1=ŒßŒãA2=–éŠÔ\n";
	std::cin >> medicalTreatmentTime;

	OpenOrClose(dayOfWeek, medicalTreatmentTime);
}