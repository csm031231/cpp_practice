#include <iostream>
using namespace std;

class Account {
	int balance, id; //�ܾ�, id �ѹ�
	string name; //���� �̸�

public:
	
	Account(string n, int i, int b) {
		name = n;
		balance = b;
		id = i;
	}

	int deposit(int money) {
		return balance += money;
	}
	int withdraw(int money) {
		return balance -= money;
	}
	int inquiry() {
		return balance;
	}
	string getOwner() {
		return name;
	}
};
int main() {
	Account a("kitae", 1, 5000); //�ܾ� 5000�� ���� ����
	a.deposit(50000); //50000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000); //20000�� ���
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}