#include <cstring>
#include <iostream>
using namespace std;

int main() {

	char a[100];
	
	cout << "�����ϰ� ������ yes�� �Է��ϼ��� >> ";

	while (1) {

		cin.getline(a, 100);
		cout << "�����ϰ� ������ yes�� �Է��ϼ��� >> ";

		if (strcmp(a,"yes")==0) {
			cout << "�����մϴ�...";
			break;
		}
		else { }
	}

	return 0;
}