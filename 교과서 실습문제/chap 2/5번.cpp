#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[100];
	int num = 0;
	cin.getline(a, 100);
	for (int i = 0; i <= sizeof(a); i++){
		if (a[i] == 'x'){
			num++;
		}
	}
	cout << "x�� ������" << num;
	return 0;
}