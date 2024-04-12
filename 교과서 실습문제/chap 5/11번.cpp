#include <iostream>
#include <string>
using namespace std;
//11번 1번
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
//	void show() { cout << title << ' ' << price << "원" << endl; }
//};
//
//int main() {
//
//	Book cpp("명품C++", 1000);
//	Book java = cpp;
//	java.set("명품자바", 1200);
//	cpp.show();
//	java.show();
//}

//11번 2번
//Book::Book(const Book & b) {
//	this->price = b.price;
//	this->title = b.title;
//}

//11번 3번
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
		delete[] title;   //소멸자
	}
	void set(const char* title, int price) {
		delete[] this->title; 
		//여기서 this -> title을 안적고 delete[] title이라고 적으면 위에 
		//title 객체가 소멸되는게 아니라 명품자바를 넣은 title이 초기화 되는거라 결과가 제대로 안나옴
		this->price = price;
		int len = strlen(title);
		this->title = new char[len + 1];
		strcpy_s(this->title, len + 1, title);
	}
	void show() { cout << title << ' ' << price << "원" << endl; }
};
Book::Book(const Book& b) {
	delete[] title;
	this->price = b.price;
	int len = strlen(b.title);
	title = new char[len + 1];
	strcpy_s(this->title, len + 1, b.title);
}

int main() {

	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
