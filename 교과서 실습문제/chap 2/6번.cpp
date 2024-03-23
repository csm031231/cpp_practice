#include <iostream>
using namespace std;

int main() {
	char a[100], b[100];
	cout << "새 암호를 입력하세요 : ";
	cin >> a;
	cout << "새 암호를 다시 한 번 입력하세요 : ";
	cin >> b;

	if (strcmp(a , b) == 0) {
		cout << "같습니다.";
	}
	//strcmp() 함수는 두 개의 문자열을 비교하는 함수, 두 문자열이 동일한지 비교하고, 동일하면 0을 반환
	else {
		cout << "다릅니다.";
	}

	return 0;
}
