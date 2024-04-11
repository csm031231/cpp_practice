#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	
	int random;

public:
	Random() {
		srand(time(nullptr));
	}
	int next() {
		return rand();
	}
	int nextInRange(int min, int max) {
		return min + rand() % (max - min + 1);
	}
};

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 4������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}