#include <iostream>
#include <string>
using namespace std;

class Seat {
	string name;
public:
	Seat(string name = "---") { this->name = name; }
	void reserve(string name) { this->name = name; }
	void cancel() { this->name = "---"; }
	void show() { cout << name; }
};

class Schedule {
	Seat* seats;
	string time;
public:
	Schedule(string time = "00시") {
		seats = new Seat[8];
		this->time = time;
	}
	void reserve(int idx, string name) { seats[idx].reserve(name); }
	void cancel(int idx) { seats[idx].cancel(); }
	void show() {
		for (int i = 0;i < 8;i++) {
			seats[i].show();
			cout << "\t";
		}
		cout << endl;
	}
	void setTime(string time) {
		this->time = time;
	}
	string getTime() { return time; }
};

class AirlineBook {
	Schedule* schedules;
public:
	AirlineBook() {
		schedules = new Schedule[3];
		schedules[0].setTime("07시:");
		schedules[1].setTime("12시:");
		schedules[2].setTime("17시:");
	}
	void reserve(int idx, int seat, string name) {
		schedules[idx].reserve(seat, name);
	}
	void cancel(int idx, int seat, string name) {
		schedules[idx].cancel(seat);
	}
	void show(int idx) {
		cout << schedules[idx].getTime() << '\t';
		schedules[idx].show();
	}
};

class Console {
public:
	static int menu, time;
	static AirlineBook han;
	static void run() {
		cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl;
		while (true) {
			showMenu();
			switch (menu) {
			case 1:
				reserve(); break;
			case 2:
				cancel(); break;
			case 3:
				show(); break;
			case 4:
				cout << "예약시스템을 종류합니다." << endl;
				return;
			}
		}
	}
	static void showMenu() {
		cout << "\n예약1, 취소:2, 보기:3, 끝내기:4>> ";
		cin >> menu;
	}
	static void reserve() {
		cout << "07시:1, 12시:2, 17시:3>> ";
		cin >> time;
		han.show(time - 1);
		int seatIdx;
		string name;
		cout << "좌석번호>> ";
		cin >> seatIdx;
		cout << "이름입력>> ";
		cin >> name;
		han.reserve(time - 1, seatIdx - 1, name);
	}
	static void cancel() {
		cout << "07시:1, 12시:2, 17시:3>> ";
		cin >> time;
		han.show(time - 1);
		int seatIdx;
		string name;
		cout << "좌석번호>> ";
		cin >> seatIdx;
		cout << "이름입력>> ";
		cin >> name;
		han.cancel(time - 1, seatIdx - 1, name);
	}
	static void show() {
		for (int i = 0;i < 3;i++) {
			han.show(i);
		}
	}
};

int Console::menu = 0;
int Console::time = 0;
AirlineBook Console::han;

int main() {
	Console::run();
	return 0;
}
