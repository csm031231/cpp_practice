#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};
int main() {
	int a, r;
	int cnt = 0;
	cout << "���� ���� >> ";
	cin >> a;
	Circle *c = new Circle[a];

	for (int i = 0; i < a; i++) {
		cout << "�� " << i + 1 << "�� ������ >>";
		cin >> r;
		c[i].setRadius(r);
	}
	for (int i = 0; i < a; i++) {
		if (c[i].getArea() > 100) {
			cnt++;
		}
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�.";
}