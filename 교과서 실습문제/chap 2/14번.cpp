#include <iostream>
using namespace std;

int main() {
	char coffee[100];
	int num, sum, a = 0;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;


	while (true) {
		if (a > 20000) {
			cout << "���� " << a << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
			break;
		}
		else {
				cout << "�ֹ� >> ";
		        cin >> coffee >> num;

			if (strcmp(coffee, "����������") == 0) {
		        sum = 2000 * num;
				a += sum;

		        cout << sum << "�� �Դϴ�. ���ְ� �弼��" << endl;
			}
			else if (strcmp(coffee, "īǪġ��") == 0) {
				sum = 2500 * num;
				a += sum;

				cout << sum << "�� �Դϴ�. ���ְ� �弼��" << endl;
			}
			else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
				sum = 2300 * num; 
				a += sum;

				cout << sum << "�� �Դϴ�. ���ְ� �弼��" << endl;
			}
		}
	}
	return 0;
}