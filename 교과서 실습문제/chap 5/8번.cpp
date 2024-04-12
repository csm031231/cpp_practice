#include <iostream>
using namespace std;
class MyIntStack {
	int* p; // 스택 메모리로 사용할 포인터
	int size; // 스택의 최대 크기
	int tos; // 스택 탑을 가르키는 인덱스
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};
MyIntStack::MyIntStack(){
}
MyIntStack::MyIntStack(int size) {
	this->size = size; 
	p = new int[size];
	tos = 0;
}
MyIntStack::MyIntStack(const MyIntStack& s){
	this->p = new int [s.size];
	this->size = s.size;
	this->tos = s.tos;
	for (int i = 0; i <= s.tos; i++) {
		this->p[i] = s.p[i];
	}
}
bool MyIntStack::push(int n){
	if (tos > 9) {
		return false;
	}
	else {
		p[tos++] = n;
		return true;
	}
}
bool MyIntStack::pop(int &n){
	tos--;
	if (tos <= 0) {
		return false;
	}
	else {
		n = p[tos];
		return true;
	}
}
MyIntStack::~MyIntStack(){

}
int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;

	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;

	return 0;
}