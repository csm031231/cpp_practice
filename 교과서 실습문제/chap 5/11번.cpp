#include <iostream>
#include <string>
using namespace std;
//11�� 1��
//class Book {
//	char* title;
//	int price;
//public:
//	Book(){}
//	Book(const char* title, int price) {
//		this->price = price;
//		int len = strlen(title);
//		this->title = new char[len + 1];
//		strcpy(this->title,title);
//	}
//	~Book() {
//		delete[] title;
//	}
//	void set(const char* title, int price) {
//		delete[] title;
//		this->price = price;
//		int len = strlen(title);
//		this->title = new char[len + 1];
//		strcpy(this->title, title);
//	}
//	void show() { cout << title << ' ' << price << "��" << endl; }
//};
//
//int main() {
//
//	Book cpp("��ǰC++", 1000);
//	Book java = cpp;
//	java.set("��ǰ�ڹ�", 1200);
//	cpp.show();
//	java.show();
//}

//11�� 2��
//Book::Book(const Book & b) {
//	this->price = b.price;
//	this->title = b.title;
//}

//11�� 3��
#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book() {}
	Book(const Book& b);
	Book(const char* title, int price) {
		this->price = price;
		int len = strlen(title);
		this->title = new char[len + 1];
		strcpy_s(this->title, len + 1, title);
	}
	~Book() { 
		delete[] title;   //�Ҹ���
	}
	void set(const char* title, int price) {
		delete[] this->title; 
		//���⼭ this -> title�� ������ delete[] title�̶�� ������ ���� 
		//title ��ü�� �Ҹ�Ǵ°� �ƴ϶� ��ǰ�ڹٸ� ���� title�� �ʱ�ȭ �Ǵ°Ŷ� ����� ����� �ȳ���
		this->price = price;
		int len = strlen(title);
		this->title = new char[len + 1];
		strcpy_s(this->title, len + 1, title);
	}
	void show() { cout << title << ' ' << price << "��" << endl; }
};
Book::Book(const Book& b) {
	delete[] title;
	this->price = b.price;
	int len = strlen(b.title);
	title = new char[len + 1];
	strcpy_s(this->title, len + 1, b.title);
}

int main() {

	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}
