#include <iostream>
using namespace std;

int main() {
	

	cout << "���� 5�� �Է�>> ";
	int* arr = new int(5); //�迭�� ���� �Ҵ�

	double sum = 0;

	for (int i = 0; i < 5; i++) {
	    cin >> arr[i];
		sum += arr[i];
	}
	cout << sum / 5;
	
}