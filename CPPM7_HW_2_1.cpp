#include "CPPM7_HW_2_1.h"
#include <iostream>
enum class Months {
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
	Months month;
	int numberMonth;
	do {
		std::cout << "������� ����� ������: ";
		std::cin >> numberMonth;
		if (1 <= numberMonth && numberMonth <= 12) {
			month = static_cast<Months>(numberMonth);
			if (month == Months::������) {
				std::cout << "������\n";
			}
			else if (month == Months::�������) {
				std::cout << "�������\n";
			}
			else if (month == Months::����) {
				std::cout << "����\n";
			}
			else if (month == Months::������) {
				std::cout << "������\n";
			}
			else if (month == Months::���) {
				std::cout << "���\n";
			}
			else if (month == Months::����) {
				std::cout << "����\n";
			}
			else if (month == Months::����) {
				std::cout << "����\n";
			}
			else if (month == Months::������) {
				std::cout << "������\n";
			}
			else if (month == Months::��������) {
				std::cout << "��������\n";
			}
			else if (month == Months::�������) {
				std::cout << "�������\n";
			}
			else if (month == Months::������) {
				std::cout << "������\n";
			}
			else {
				std::cout << "�������\n";
			}
		}
		else if (numberMonth != 0) {
			std::cout << "������������ �����!\n";
		}
		else {
			std::cout << "�� ��������\n";
		}
	} while (numberMonth != 0);
}