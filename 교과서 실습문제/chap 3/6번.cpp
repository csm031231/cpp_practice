#include <iostream>
using namespace std;
class EvenRandom {

	int random;

public:
	EvenRandom();
	int next();
	int nextInRange(int min, int max);
};
EvenRandom::EvenRandom(){ 
	srand(time(nullptr)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
}
int EvenRandom::next() { return rand(); }
int EvenRandom::nextInRange(int min, int max){ 
	return min + rand() % (max - min + 1); 
}

int main() {
	EvenRandom r;

	cout << "----0에서 " << RAND_MAX << "까지의 랜덤 정수 10개----" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 10까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10); // 2에서 10 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}