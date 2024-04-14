#include <iostream>
#include <string>
using namespace std;

int main() {
	string std;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;

	while (true) {
		getline(cin, std);
		if (std == "exit") {
			break;
		}
		for (int i = std.length(); i >= 0; i--) {
			cout << std[i] <<endl;
		}
	}
}