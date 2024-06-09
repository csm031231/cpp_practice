#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
class NamedCircle:public Circle {
	string name;
public:
	NamedCircle(int r = 0, string n = "") { name = n; }
	void setName(string name) {
		this->name = name;
	}
	string getName() { return name; }
};
int main() {
	NamedCircle pizza[5];
	int num;
	string name;
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " >> ";
		cin >> num >> name;
		pizza[i].setRadius(num);
		pizza[i].setName(name);
	}
	int max = 0;
	int index;
	for (int i = 0; i < 5; i++) {
		if (max < pizza[i].getArea()) {
			max = pizza[i].getArea();
			index = i;
		}
	}
	cout << "���� ������ ū ���ڴ� " << pizza[index].getName() << "�Դϴ�.";
}