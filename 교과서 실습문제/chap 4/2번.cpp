#include <iostream>
using namespace std;

int main() {
	

	cout << "정수 5개 입력>> ";
	int* arr = new int(5); //배열로 동적 할당

	double sum = 0;

	for (int i = 0; i < 5; i++) {
	    cin >> arr[i];
		sum += arr[i];
	}
	cout << sum / 5;
	
}