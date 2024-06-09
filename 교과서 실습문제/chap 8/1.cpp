#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { ; }
	Circle(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
class NamedCircle:public Circle {
	int r;
	string w;
public:
	NamedCircle(int radius, string name) {
		r = radius; w = name;
		setRadius(r);
	}
	void show() {
		cout << "반지름이 " << r << "인 " << w;
	}
	
};
int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show();
}