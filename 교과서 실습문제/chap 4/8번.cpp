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
	cout << "원의 개수 >> ";
	cin >> a;
	Circle *c = new Circle[a];

	for (int i = 0; i < a; i++) {
		cout << "원 " << i + 1 << "의 반지름 >>";
		cin >> r;
		c[i].setRadius(r);
	}
	for (int i = 0; i < a; i++) {
		if (c[i].getArea() > 100) {
			cnt++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다.";
}