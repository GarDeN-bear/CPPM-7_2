#include "CPPM7_HW_2_1.h"
#include <iostream>
enum class months {
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
	months month;
	int number_month;
	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> number_month;
		if (1 <= number_month && number_month <= 12) {
			month = static_cast<months>(number_month);
			if (month == months::Январь) {
				std::cout << "Январь\n";
			}
			else if (month == months::Февраль) {
				std::cout << "Февраль\n";
			}
			else if (month == months::Март) {
				std::cout << "Март\n";
			}
			else if (month == months::Апрель) {
				std::cout << "Апрель\n";
			}
			else if (month == months::Май) {
				std::cout << "Май\n";
			}
			else if (month == months::Июнь) {
				std::cout << "Июнь\n";
			}
			else if (month == months::Июль) {
				std::cout << "Июль\n";
			}
			else if (month == months::Август) {
				std::cout << "Август\n";
			}
			else if (month == months::Сентябрь) {
				std::cout << "Сентябрь\n";
			}
			else if (month == months::Октябрь) {
				std::cout << "Октябрь\n";
			}
			else if (month == months::Ноябрь) {
				std::cout << "Ноябрь\n";
			}
			else {
				std::cout << "Декабрь\n";
			}
		}
		else if (number_month != 0) {
			std::cout << "Неправильный номер!\n";
		}
		else {
			std::cout << "До свидания\n";
		}
	} while (number_month != 0);
}