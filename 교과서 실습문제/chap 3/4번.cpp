#include <iostream>
using namespace std;

class CoffeMachine {
	int coffe, water, sugar;

public:
	CoffeMachine(int c, int w, int s) {
		coffe = c;
		water = w;
		sugar = s;
	}
	int drinkEspresso() {
		return coffe -= 1, water -= 1;
	}
	int drinkAmericano() {
		return coffe -= 1, water -= 2;
	}
	int drinkSugarCoffee() {
		return coffe -= 1, water -= 2, sugar -= 1;
	}
	int fill() {
		return coffe = 10, water = 10, sugar = 10;
	}
	void show() {
		cout << "커피 머신 상태, 커피: " << coffe << " 물: " << water << " 설탕: " << sugar << endl;
	}
};
int main() {
	CoffeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();

	return 0;
}