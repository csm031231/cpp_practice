//1��
// #include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	cout << "���ڿ� �Է�>> ";
//	string str;
//	int cnt = 0; // a�� ���� �� �� ��.
//	getline(cin, str);
//
//	for (int i = 0; i <= str.length(); i++) {
//		if (str[i] == 'a') {
//			cnt++;
//		}
//	}
//	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�.";
//
//}
//2��
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cout << "���ڿ� �Է�>>" << endl;
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
    cout << "���� a��" << sum;
}