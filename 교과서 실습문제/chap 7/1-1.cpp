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
		cout << title << ' ' << price << "¿ø " << pages << " ÆäÀÌÁö" << endl;
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
	book a("Ã»Ãá", 20000, 300), b("¹Ì·¡", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
