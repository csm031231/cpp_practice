#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char str[100], max[100];
	int max_cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		cin.getline(str, 100, ';');
		cout << i + 1 << " : " << str << "\n";

		if (strlen(str) > max_cnt)
		{
			strcpy_s(max, str);
			max_cnt = strlen(str);
		}
	}

	cout << "���� �� �̸��� " << max << '\n';

	return 0;
}