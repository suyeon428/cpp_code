#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	string name;
public:
	Player() { }
	Player(string name) { this->name = name; }
	string getname() { return name; }
};

class GamblingGame {
	Player players[2];
public:
	void play();
};

void GamblingGame::play() {
	string p1, p2;
	cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
	cout << "첫번째 선수 이름>>";
	cin >> p1;
	players[0] = Player(p1);
	cout << "두번째 선수 이름>>";
	cin >> p2;
	players[1] = Player(p2);
	cin.ignore();

	srand((unsigned)time(0));
	int end = 0;
	int ran[3];
	while (true) {
		for (int i = 0; i < 2; i++) {
			cout << players[i].getname() << ":<Enter>";
			while (true) {
				char ch;
				cin.get(ch);  //엔터키 처리 이렇게해?
				if (ch == '\n') {
					break;
				}
			}
			cout << '\t' << '\t';
			for (int j = 0; j < 3; j++) {
				ran[j] = rand() % 3;
				cout << ran[j] << "\t";
			}
			if (ran[0] == ran[1] && ran[1] == ran[2] && ran[0] == ran[2]) {
				cout << players[i].getname() << "님 승리!!" << endl;
				return;
			}
			else {
				cout << "아쉽군요!" << endl;
			}
		}
	}
}

int main() {
	GamblingGame game;
	game.play();
}