#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[100], adress[100], age[100];

	cout << "�̸���? ";
	cin.getline(name, 100);

	cout << "�ּҴ�? ";
	cin.getline(adress, 100);

	cout << "���̴�? ";
	cin.getline(age, 100);

	cout << name << "," << adress << "," << age << "��" << endl;

	
	return 0;
}