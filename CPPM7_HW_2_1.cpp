#include "CPPM7_HW_2_1.h"
#include <iostream>
enum class months {
	������ = 1,
	�������,
	����,
	������,
	���,
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������,
};

void CPPM7_HW_2_1() {
	months month;
	int number_month;
	do {
		std::cout << "������� ����� ������: ";
		std::cin >> number_month;
		if (1 <= number_month && number_month <= 12) {
			month = static_cast<months>(number_month);
			if (month == months::������) {
				std::cout << "������\n";
			}
			else if (month == months::�������) {
				std::cout << "�������\n";
			}
			else if (month == months::����) {
				std::cout << "����\n";
			}
			else if (month == months::������) {
				std::cout << "������\n";
			}
			else if (month == months::���) {
				std::cout << "���\n";
			}
			else if (month == months::����) {
				std::cout << "����\n";
			}
			else if (month == months::����) {
				std::cout << "����\n";
			}
			else if (month == months::������) {
				std::cout << "������\n";
			}
			else if (month == months::��������) {
				std::cout << "��������\n";
			}
			else if (month == months::�������) {
				std::cout << "�������\n";
			}
			else if (month == months::������) {
				std::cout << "������\n";
			}
			else {
				std::cout << "�������\n";
			}
		}
		else if (number_month != 0) {
			std::cout << "������������ �����!\n";
		}
		else {
			std::cout << "�� ��������\n";
		}
	} while (number_month != 0);
}