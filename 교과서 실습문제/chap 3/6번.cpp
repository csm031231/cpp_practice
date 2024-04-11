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
	srand(time(nullptr)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
}
int EvenRandom::next() { return rand(); }
int EvenRandom::nextInRange(int min, int max){ 
	return min + rand() % (max - min + 1); 
}

int main() {
	EvenRandom r;

	cout << "----0���� " << RAND_MAX << "������ ���� ���� 10��----" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 10������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10); // 2���� 10 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}