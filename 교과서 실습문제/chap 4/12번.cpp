#include <iostream>
using namespace std;

class Circle {
	int radius; // ������
	string name; // �� �̸�
public:
	Circle() { ; }
	void setCircle(string name, int radius){ //�̸��� ������ ����
		this->name = name;
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	string getName() {
		return name;
	}
};
class CircleManager {
	Circle* p; // Circle �迭�� ���� ������
	int size; // �迭�� ũ��
public:
	CircleManager() { ; } 
	CircleManager(int size) { // size ũ���� �迭�� ���� ����. ����ڷκ��� �Է� �Ϸ�
		 p = new Circle[size];
		 this->size = size;
		 int r;
		 string n;
		 for (int i = 0; i < size; i++) {
			 cout << "��" << i + 1 << "�� �̸��� ������ >> ";
			 cin >> n >> r;
			 p[i].setCircle(n, r);
		 }
	}
	~CircleManager() { delete[] p; }
	void searchByName(){ // ����ڷκ��� ���� �̸��� �Է� �޾� ���� ��� 
		string n;
		cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
		cin >> n;
		for (int i = 0; i < size; i++) {
			if (n == p[i].getName()) {
				cout << endl << p[i].getName() << "���� ������" << p[i].getArea() << endl;
		    }
		}
	}
	void searchByArea(){ // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ��� 
		int min;
		cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
		cin >> min;
		cout << min << "���� ū ���� �˻��մϴ�." << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea() > min) {
				cout << p[i].getName() << "�� ������ " << p[i].getArea() << ', ';
			}
		}
	}
};
int main() {
	Circle c;
	int a;
	cout << "���� ���� >> ";
	cin >> a;
	CircleManager m(a); 
	m.searchByName();
	m.searchByArea();
}