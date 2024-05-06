//1번
// #include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	cout << "문자열 입력>> ";
//	string str;
//	int cnt = 0; // a의 개수 셀 때 씀.
//	getline(cin, str);
//
//	for (int i = 0; i <= str.length(); i++) {
//		if (str[i] == 'a') {
//			cnt++;
//		}
//	}
//	cout << "문자 a는 " << cnt << "개 있습니다.";
//
//}
//2번
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cout << "문자열 입력>>" << endl;
    getline(cin, a);
    int sum = 0;
    int index = -1;
    while (1)
    {
        index = a.find('a', index + 1);
        if (index == -1)
        {
            break;
        }
        sum++;

    }
    cout << "문자 a는" << sum;
}