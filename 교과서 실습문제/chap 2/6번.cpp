#include <iostream>
using namespace std;

int main() {
	char a[100], b[100];
	cout << "�� ��ȣ�� �Է��ϼ��� : ";
	cin >> a;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� : ";
	cin >> b;

	if (strcmp(a , b) == 0) {
		cout << "�����ϴ�.";
	}
	//strcmp() �Լ��� �� ���� ���ڿ��� ���ϴ� �Լ�, �� ���ڿ��� �������� ���ϰ�, �����ϸ� 0�� ��ȯ
	else {
		cout << "�ٸ��ϴ�.";
	}

}