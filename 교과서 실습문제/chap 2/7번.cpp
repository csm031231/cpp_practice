#include <cstring>
#include <iostream>
using namespace std;

int main() {

	char a[100];
	
	cout << "종료하고 싶으면 yes를 입력하세요 >> ";

	while (1) {

		cin.getline(a, 100);
		cout << "종료하고 싶으면 yes를 입력하세요 >> ";

		if (strcmp(a,"yes")==0) {
			cout << "종료합니다...";
			break;
		}
		else { }
	}

	return 0;
}