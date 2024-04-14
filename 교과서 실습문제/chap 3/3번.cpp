#include <iostream>
using namespace std;

class Account {
	int balance, id; //잔액, id 넘버
	string name; //계좌 이름

public:
	
	Account(string n, int i, int b) {
		name = n;
		balance = b;
		id = i;
	}

	void deposit(int money) {
		balance += money;
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
	Account a("kitae", 1, 5000); //잔액 5000원 계좌 생성
	a.deposit(50000); //50000원 저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000); //20000원 출금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
