#include <iostream>
#include <string>
using namespace std;

class Player {
	string name;
	
public:
	Player() {

	}
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};
class GamblingGame {
	Player p[2];
public:
	void Game(){
		char enter;
		string n, e;
		int i = 0;
		srand((unsigned)time(0));

		cout << "**** �׺� ������ �����մϴ�. ****" << endl;
		for (i = 0; i < 2; i++) {
			cout << i + 1 << "��° ���� �̸� >> ";
			cin >> n;
			p[i].setName(n);
		}
		while (true) {
			cout << p[i].getName() << ": ";
			getline(cin, n);

		}

	}
};
int main() {
	GamblingGame g;
	g.Game();
}