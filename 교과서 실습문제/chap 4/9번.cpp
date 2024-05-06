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

	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << " >>";
		cin >> n >> t;
		p[i].set(n, t);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << p[i].getName();
	}
	cout << endl << "전화번호 검색합니다. 이름을 입력하세요>> ";
	cin >> n;
	cout << "전화번호는 ";
	for (int i = 0; i < 3; i++) {
		if (n == p[i].getName()) {
			cout << p[i].getTel();
		}
	}
}