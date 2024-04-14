#include <iostream>
#include <string>
using namespace std;
class Person {
	int b;
	string name;
public:
	Person() {};
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(int a, string n) { name = n, b = a; }
};
class Family {
	Person* p;
	string name;
	int size;
public:
	Family(string name, int size) {
		this->name = name;
		this->size = size;
		p = new Person[size];
	}
	void setName(int a, string n) {
		p[a] = n;
	}
	void show() {
		cout << "Simson 가족은 다름과 같이 3명 입니다." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName() << ' ';
		}
	}
	~Family() { delete[] p; }
};
int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart. Simpson");
	simpson->show();
	delete simpson;
}