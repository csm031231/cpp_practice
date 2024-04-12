#include <iostream>
using namespace std;

class MyInStack {
	int p[10]; // 최대 10개의 정수 저장
	int tos; // 그택의 꼭대기를 가리키는 인젝스
public: 
	MyInStack();
	bool push(int n); //정수 n 푸시, 꽉 차 있으면 false, 아니면 true 리턴
	bool pop(int& n); //팝하여 n에 저장, 스택이 비어있으면 false 아니면 true 리턴
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
	for (int i = 0; i < 11; i++) { // 11개를 푸시하면, 마지막에는 stack full이 된다.
		if (a.push(i)) cout << i << ' '; //푸시된 값 에코
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) { //11를 팝하면, 마지막에는 stack empty가 된다.
		if (a.pop(n)) cout << n << ' '; // 팝 한 값 출력
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}