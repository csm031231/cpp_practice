#include <iostream>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() { 
		
	}
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};
int main() {
	Person p[3];
	string n, t;

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << " >>";
		cin >> n >> t;
		p[i].set(n, t);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << p[i].getName();
	}
	cout << endl << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>> ";
	cin >> n;
	cout << "��ȭ��ȣ�� ";
	for (int i = 0; i < 3; i++) {
		if (n == p[i].getName()) {
			cout << p[i].getTel();
		}
	}
}