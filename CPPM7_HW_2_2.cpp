#include "CPPM7_HW_2_2.h"
#include <iostream>

struct BankAccount {
	int number;
	std::string name;
	double balance;
};

void changeBalance(BankAccount* bankAccount, double newBalance) {
	bankAccount->balance = newBalance;
}
void CPPM7_HW_2_2() {
	BankAccount bankAccount;
	double newBalance;
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> bankAccount.number;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> bankAccount.name;
	std::cout << "¬ведите баланс: ";
	std::cin >> bankAccount.balance;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> newBalance;
	changeBalance(&bankAccount, newBalance);
	std::cout << "¬аш счЄт: " << bankAccount.name << ", " << bankAccount.number << ", " << bankAccount.balance << "\n";
}
