#include <iostream>
using namespace std;

class book {
	string title;
	int price, pages;
public:
	book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string gettitle() { return title; }
	book &operator += (int a1) {
		this->price += a1;
		return *this;
	}
	book &operator -= (int a1) {
		this->price -= a1;
		return *this;
	}
};
int main() {
	book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}