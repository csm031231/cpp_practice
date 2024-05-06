#include <iostream>
using namespace std;

class Circle {
	int radius; //반지름
public:
	void setRadius(int radius) { // 반지름을 설정
		this->radius = radius;
	}
	double getArea(){ // 면적을 리턴
		return 3.14 * radius * radius;
	}
};
int main() {
	Circle c[3];
	int r;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		c[i].setRadius(r);
	}
	for (int i = 0; i < 3; i++) {
		if (c[i].getArea() > 100) {
			cnt++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다.";
}