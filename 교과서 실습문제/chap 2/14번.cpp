#include <iostream>
using namespace std;

int main() {
	char coffee[100];
	int num, sum, a = 0;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;


	while (true) {
		if (a > 20000) {
			cout << "오늘 " << a << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
			break;
		}
		else {
				cout << "주문 >> ";
		        cin >> coffee >> num;

			if (strcmp(coffee, "에스프레소") == 0) {
		        sum = 2000 * num;
				a += sum;

		        cout << sum << "원 입니다. 맛있게 드세요" << endl;
			}
			else if (strcmp(coffee, "카푸치노") == 0) {
				sum = 2500 * num;
				a += sum;

				cout << sum << "원 입니다. 맛있게 드세요" << endl;
			}
			else if (strcmp(coffee, "아메리카노") == 0) {
				sum = 2300 * num; 
				a += sum;

				cout << sum << "원 입니다. 맛있게 드세요" << endl;
			}
		}
	}
	return 0;
}