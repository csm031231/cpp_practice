#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) { // 생성자
		size = n; p = new int[n]; //n개 정수 배열의 동적생성
	}
	void read() { 
		for (int i = 0; i < size; i++) {
		cin >> p[i];
		}
	}
	void write() {
		for (int i = 0; i < size; i++) {
			cout << p[i] << ' ';
		} 
		cout << endl;
	}
	int big() {
		int max = 0;
		for (int i = 0; i < size; i++) {
			if (max < p[i]) {
				max = p[i];
			}
		}
		return max;
	}
	~Sample(){ delete[] p; }
};
int main() {
	Sample s(10); //10개의 정수 배열을 가진 Sample 객체 생성
	s.read(); //키보드에서 정수 배열 읽기
	s.write(); //정수 배열 출력
	cout << "가장 큰 수는 " << s.big() << endl; //가장 큰 수 출력
}