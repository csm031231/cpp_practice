#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string std;
	 
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
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