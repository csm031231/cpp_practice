#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string gettitle() { return title; }
	friend bool operator < (string name, Book n);
};
bool operator < (string name, Book n) {
	if (name < n.title) {
		return true;
	}
	return false;
}
int main() {
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ��� >> ";
	getline(cin, b);
	if (b < a)
		cout << a.gettitle() << "��" << b << "���� �ڿ� �ֱ���!" << endl;
}