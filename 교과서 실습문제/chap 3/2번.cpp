#include <iostream>
using namespace std;

class Date {
	int Year, Month, Day;
	string str;
	string d, b, c;

public:
	Date() {
		Year = 2014;
		Month = 3;
		Day = 20;
	}
	Date(int y, int m, int d) {
		Year = y;
		Month = m;
		Day = d;
	}
	Date(string a) {
		str = a;
		d = str.substr(0, 4);
		b = str.substr(5, 1);
		c = str.substr(7, 2);
	}
	int getYear() { return Year; };
	int getMonth() { return Month; };
	int getDay() { return Day; };
	void show() {
		cout << d << "³â" << b << "¿ù" << c << "ÀÏ"<<endl;
	}
};

int main() {

	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

}