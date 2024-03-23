#include <iostream>
using namespace std;

int main() {
	char s[100];

	cout << "문자열 입력 >> ";
	cin.getline(s, 100);

	for (char i = 0; i <= strlen(s); i++) {
		for (char j = 0; j < i; j++) {
			cout << s[j];
		}
		cout << "\n";
	}

	return 0;
}
