#include "CPPM7_HW_2_3.h"
#include <iostream>
struct Address {
	std::string city;
	std::string street;
	int numberBuilding;
	int numberFlat;
	int index;
};

void showAdress(Address& address) {
	std::cout << "�����: " << address.city << "\n";
	std::cout << "�����: " << address.street << "\n";
	std::cout << "����� ����: " << address.numberBuilding << "\n";
	std::cout << "����� ��������: " << address.city << "\n";
	std::cout << "������: " << address.index << "\n";
}
void CPPM7_HW_2_3()
{
	Address address1;
	address1.city = "������";
	address1.street = "�����";
	address1.numberBuilding = 12;
	address1.numberFlat = 8;
	address1.index = 123456;
	showAdress(address1);
	std::cout << "\n";
	Address address2;
	address2.city = "������";
	address2.street = "�������";
	address2.numberBuilding = 59;
	address2.numberFlat = 143;
	address2.index = 953769;
	showAdress(address2);
}
