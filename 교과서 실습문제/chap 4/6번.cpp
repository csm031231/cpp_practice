#include <iostream>
#include <string>
using namespace std;

int main() {
	string std;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;

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