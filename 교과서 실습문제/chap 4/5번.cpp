#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string std;
	 
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	srand((unsigned)time(0));
	while (true) {
	    getline(cin, std);
		if (std == "exit") {
			break;
		}

		int n = rand() % std.length();
		char a = rand() % 26 + 'a';

		std[n] = a;
		cout << std;
	}
	 
}