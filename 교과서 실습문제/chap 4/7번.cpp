#include <iostream>
using namespace std;

class Circle {
	int radius; //������
public:
	void setRadius(int radius) { // �������� ����
		this->radius = radius;
	}
	double getArea(){ // ������ ����
		return 3.14 * radius * radius;
	}
};
int main() {
	Circle c[3];
	int r;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		c[i].setRadius(r);
	}
	for (int i = 0; i < 3; i++) {
		if (c[i].getArea() > 100) {
			cnt++;
		}
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�.";
}