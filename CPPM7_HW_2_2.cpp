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
	std::cout << "������� ����� �����: ";
	std::cin >> bankAccount.number;
	std::cout << "������� ��� ���������: ";
	std::cin >> bankAccount.name;
	std::cout << "������� ������: ";
	std::cin >> bankAccount.balance;
	std::cout << "������� ����� ������: ";
	std::cin >> newBalance;
	changeBalance(&bankAccount, newBalance);
	std::cout << "��� ����: " << bankAccount.name << ", " << bankAccount.number << ", " << bankAccount.balance << "\n";
}
