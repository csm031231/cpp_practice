#include <iostream>
using namespace std;

int big(int a, int b, int c = 100) {
	int max = c;
	if (a > b) {
		if (a > max) {
			return max;
		}
		return a;
	}
	if (a < b) {
		if (b > max) {
			return max;
		}
		return b;
	}

}
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);

	cout << x << ' ' << y << ' ' << z << endl;
}