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

		cout << "**** 겜블링 게임을 시작합니다. ****" << endl;
		for (i = 0; i < 2; i++) {
			cout << i + 1 << "번째 선수 이름 >> ";
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