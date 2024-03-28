#include <iostream>
#include <string>
using namespace std;

class Account {
	int balance, id;
	string name;

public:
	Account(string n, int i, int b);
	void deposit(int money);
	void withdraw(int money);
	int inquiry();
	string getOwner();

};
Account::Account(string n, int i, int b) {
		name = n;
		balance = b;
		id = i;
	}

void Account::deposit(int money) {
		balance += money;
	}
void Account::withdraw(int money) {
		balance -= money;
	}
int Account::inquiry() {
		return balance;
	}
string Account::getOwner() {
		return name;
	}
int main() {
	Account a("kitae", 1, 5000); 
	a.deposit(50000); 
	cout << a.getOwner() << "ÀÜ¾×Àº " << a.inquiry() << endl;
	a.withdraw(20000); 
	cout << a.getOwner() << "ÀÜ¾×Àº " << a.inquiry() << endl;
}