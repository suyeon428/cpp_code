#include <iostream>
#include <string>
#include <map>
using namespace std;

void run() {
	map<string, int> m;
	int op, score;
	string name;
	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
	while (true) {
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> op;
		if (op == 1) {
			cout << "이름과 점수>> ";
			cin >> name >> score;
			m[name] = score;
		}
		else if (op == 2) {
			cout << "이름>> ";
			cin >> name;
			if (m.find(name) == m.end()) {
				cout << name << "을 찾을 수 없습니다." << endl;
			}
			else {
				cout << name << "의 점수는 " << m[name] << endl;
			}
		}
		else if (op == 3) {
			cout << "프로그램을 종료합니다..." << endl;
			break;
		}
	}
}

int main() {
	run();
}