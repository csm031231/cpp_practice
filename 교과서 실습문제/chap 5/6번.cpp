#include <iostream>
using namespace std;

char& find(char s[], char c, bool& success) {
	for (int i = 0; i <= strlen(s); i++) {
		if (s[i] == c) {
			success = true;
			return s[i];
		}
	}
			success = false;
}
int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}