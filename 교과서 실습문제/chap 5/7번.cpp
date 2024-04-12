#include <iostream>
using namespace std;

class MyInStack {
	int p[10]; // �ִ� 10���� ���� ����
	int tos; // ������ ����⸦ ����Ű�� ������
public: 
	MyInStack();
	bool push(int n); //���� n Ǫ��, �� �� ������ false, �ƴϸ� true ����
	bool pop(int& n); //���Ͽ� n�� ����, ������ ��������� false �ƴϸ� true ����
};
MyInStack::MyInStack() {
	tos = 0;
}
bool MyInStack::push(int n){
	if (tos > 9) { return false; }
	else { 
		p[tos++] = n;
		return true; 
	}
}
bool MyInStack::pop(int& n) {
	if (tos <= 0) { return false; }
	else { 
		n=p[--tos];
		return true; 
	}
}
int main() {
	MyInStack a;
	for (int i = 0; i < 11; i++) { // 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�.
		if (a.push(i)) cout << i << ' '; //Ǫ�õ� �� ����
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) { //11�� ���ϸ�, ���������� stack empty�� �ȴ�.
		if (a.pop(n)) cout << n << ' '; // �� �� �� ���
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}