#include <iostream>
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
	bool operator == (int a) {
		if (a == price) return true;
		return false;
	}
	bool operator == (string a) {
		if (a == title) return true;
		return false;
	}
	bool operator == (Book &b) {
		if (b.price == this->price && b.title == this->title) return true;
		return false;
	}
};
int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++�Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å �Դϴ�." << endl;
}