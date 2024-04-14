#include <iostream>
using namespace std;

class Circle {
	int radius; // 반지름
	string name; // 원 이름
public:
	Circle() { ; }
	void setCircle(string name, int radius){ //이름과 반지름 설정
		this->name = name;
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	string getName() {
		return name;
	}
};
class CircleManager {
	Circle* p; // Circle 배열에 대한 포인터
	int size; // 배열의 크기
public:
	CircleManager() { ; } 
	CircleManager(int size) { // size 크기의 배열을 동적 생성. 사용자로부터 입력 완료
		 p = new Circle[size];
		 this->size = size;
		 int r;
		 string n;
		 for (int i = 0; i < size; i++) {
			 cout << "원" << i + 1 << "의 이름과 반지름 >> ";
			 cin >> n >> r;
			 p[i].setCircle(n, r);
		 }
	}
	~CircleManager() { delete[] p; }
	void searchByName(){ // 사용자로부터 원의 이름을 입력 받아 면적 출력 
		string n;
		cout << "검색하고자 하는 원의 이름 >> ";
		cin >> n;
		for (int i = 0; i < size; i++) {
			if (n == p[i].getName()) {
				cout << endl << p[i].getName() << "원의 면적은" << p[i].getArea() << endl;
		    }
		}
	}
	void searchByArea(){ // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력 
		int min;
		cout << "최소 면적을 정수로 입력하세요 >> ";
		cin >> min;
		cout << min << "보다 큰 원을 검색합니다." << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea() > min) {
				cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ', ';
			}
		}
	}
};
int main() {
	Circle c;
	int a;
	cout << "원의 개수 >> ";
	cin >> a;
	CircleManager m(a); 
	m.searchByName();
	m.searchByArea();
}