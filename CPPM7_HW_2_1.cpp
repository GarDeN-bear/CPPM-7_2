#include "CPPM7_HW_2_1.h"
#include <iostream>
enum class Months {
	Январь = 1,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь,
};

void CPPM7_HW_2_1() {
	Months month;
	int numberMonth;
	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> numberMonth;
		if (1 <= numberMonth && numberMonth <= 12) {
			month = static_cast<Months>(numberMonth);
			if (month == Months::Январь) {
				std::cout << "Январь\n";
			}
			else if (month == Months::Февраль) {
				std::cout << "Февраль\n";
			}
			else if (month == Months::Март) {
				std::cout << "Март\n";
			}
			else if (month == Months::Апрель) {
				std::cout << "Апрель\n";
			}
			else if (month == Months::Май) {
				std::cout << "Май\n";
			}
			else if (month == Months::Июнь) {
				std::cout << "Июнь\n";
			}
			else if (month == Months::Июль) {
				std::cout << "Июль\n";
			}
			else if (month == Months::Август) {
				std::cout << "Август\n";
			}
			else if (month == Months::Сентябрь) {
				std::cout << "Сентябрь\n";
			}
			else if (month == Months::Октябрь) {
				std::cout << "Октябрь\n";
			}
			else if (month == Months::Ноябрь) {
				std::cout << "Ноябрь\n";
			}
			else {
				std::cout << "Декабрь\n";
			}
		}
		else if (numberMonth != 0) {
			std::cout << "Неправильный номер!\n";
		}
		else {
			std::cout << "До свидания\n";
		}
	} while (numberMonth != 0);
}