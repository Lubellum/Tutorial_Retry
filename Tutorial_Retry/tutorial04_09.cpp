#include "tutorial.h"

void OpenOrClose(int aDayOfWeek, int aMedicalTreatmentTime)
{
	// todo: ���͂��ꂽ���̂����l�ł��邩�A0�`6(0�`2)�͈̔͂Ɏ��܂��Ă��邩�`�F�b�N���鍀�ڂ̍쐬

	switch (aDayOfWeek)
	{
	case 0:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "�x�f\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "�x�f\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "�x�f\n";
		}
		else
		{
			std::cout << "�G���[\n";
		}
		break;

	case 1:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "�f�É\\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "�f�É\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "�f�É\\n";
		}
		else
		{
			std::cout << "�G���[\n";
		}
		break;

	case 2:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "�x�f\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "�f�É\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "�f�É\\n";
		}
		else
		{
			std::cout << "�G���[\n";
		}
		break;

	case 3:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "�f�É\\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "�f�É\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "�x�f\n";
		}
		else
		{
			std::cout << "�G���[\n";
		}
		break;

	case 4:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "�f�É\\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "�f�É\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "�f�É\\n";
		}
		else
		{
			std::cout << "�G���[\n";
		}
		break;

	case 5:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "�x�f\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "�f�É\\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "�f�É\\n";
		}
		else
		{
			std::cout << "�G���[\n";
		}
		break;

	case 6:
		if (aMedicalTreatmentTime == 0)
		{
			std::cout << "�f�É\\n";
		}
		else if (aMedicalTreatmentTime == 1)
		{
			std::cout << "�x�f\n";
		}
		else if (aMedicalTreatmentTime == 2)
		{
			std::cout << "�x�f\n";
		}
		else
		{
			std::cout << "�G���[\n";
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

	std::cout << ">0=���j�A1=���j�A2=�Ηj�A3=���j�A4=�ؗj�A5=���j�A6=�y�j\n";
	std::cin >> dayOfWeek;

	std::cout << ">0=�ߑO�A1=�ߌ�A2=���\n";
	std::cin >> medicalTreatmentTime;

	OpenOrClose(dayOfWeek, medicalTreatmentTime);
}