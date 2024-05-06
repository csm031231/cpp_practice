#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size -= 1; }
	int getSize() { return size; }
};

class CoffeVendingMachine {
	Container tong[3];
	void fill() {
		for (int i = 0; i < 3; i++) {
			tong[i].fill();
		}
		cout << "Ŀ�� " << tong[0].getSize() << "�� " << tong[1].getSize() << "���� " << tong[2].getSize();
	}
	void selectEspresso() {
		if (tong[0].getSize() <= 0 || tong[1].getSize() <= 0) {
			cout << "���ᰡ �����մϴ�.";
		}
		else {
			tong[0].consume();
			tong[1].consume();
			cout << "���������� �弼��" << endl;
		}
	}
	void selectAmericano() {
		if (tong[0].getSize() <= 0 || tong[1].getSize() <= 0) {
			cout << "���ᰡ �����մϴ�.";
		}
		else {
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
			cout << "�Ƹ޸�ī�� �弼��" << endl;
		}
	}
	void selectSugarCoffee() {
		if (tong[0].getSize() <= 0 || tong[1].getSize() <= 0 || tong[2].getSize() <= 0) {
			cout << "���ᰡ �����մϴ�.";
		}
		else {
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
			tong[2].consume();
			cout << "����Ŀ�� �弼��" << endl;
		}
	}
	void show() {
		cout << "Ŀ�� " << tong[0].getSize() << "�� " << tong[1].getSize() << "���� " << tong[2].getSize();
	}
public:
	void run() {
		int a;
		cout << "******** Ŀ�� ���Ǳ⸦ �۵��մϴ�. ********" << endl;
		while (true) {
			cout <<endl<< "�޴��� �����ּ��� (1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä��� >> ";
			cin >> a;
			switch (a)
			{
			case 1:
				selectEspresso();
				break;
			case 2:
				selectAmericano();
				break;
			case 3:
				selectSugarCoffee();
				break;
			case 4:
				show();
				break;
			case 5:
				fill();
				break;
			}
		}
	}
};
int main() {
	CoffeVendingMachine c;
	c.run();
}