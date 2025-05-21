#include <iostream>
using namespace std;

class Printer {
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Printer(string mo = "", string ma = "", int a = 0) {
		this->model = mo;
		this->manufacturer = ma;
		this->availableCount = a;
		this->printedCount = 0;
	}
	bool isAvailToPrint(int pages) {
		if (availableCount >= pages) {
			return true;
		}
		else {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
	}
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getPrintedCount() { return printedCount; }
	int getAvailableCount() { return availableCount; }
	void setModel(string model) { this->model = model; }
	void setManufacturer(string manufacturer) { this->manufacturer = manufacturer; }
	void setPrintedCount(int printedCount) { this->printedCount = printedCount; }
	void setAvailableCount(int availableCount) { this->availableCount = availableCount; }

	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

class InkJetPrinter : public Printer {
	int availableInk;
public:
	InkJetPrinter(string mo = "", string ma = "", int a = 0, int i = 0) : Printer(mo, ma, a) { this->availableInk = i; }
	void print(int pages) {
		if (isAvailToPrint(pages)) {
			if (availableInk >= pages) {
				setPrintedCount(getPrintedCount() + pages);
				setAvailableCount(getAvailableCount() - pages);
				setAvailableInk(getAvailableInk() - pages);
				cout << "프린트하였습니다." << endl;
			}
			else {
				cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
			}
		}
	}
	void show() {
		cout << getModel() << " ," << getManufacturer() << " ,남은 종이 " << getAvailableCount() << "장 ,남은 잉크 " << getAvailableInk() << endl;
	}
	int getAvailableInk() { return availableInk; }
	void setAvailableInk(int availableInk) { this->availableInk = availableInk; }
};

class LaserPrinter : public Printer {
	int availableToner;
public:
	LaserPrinter(string mo = "", string me = "", int a = 0, int t = 0) : Printer(mo, me, a) { this->availableToner = t; }
	void print(int pages) {
		if (isAvailToPrint(pages)) {
			if (availableToner >= 1) {
				setPrintedCount(getPrintedCount() + pages);
				setAvailableCount(getAvailableCount() - pages);
				setAvailableToner(getAvailableToner() - 1);
				cout << "프린트하였습니다." << endl;
			}
			else {
				cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
			}
		}
	}
	void show() {
		cout << getModel() << " ," << getManufacturer() << " ,남은 종이 " << getAvailableCount() << "장 ,남은 토너 " << getAvailableToner() << endl;
	}
	int getAvailableToner() { return availableToner; }
	void setAvailableToner(int availableToner) { this->availableToner = availableToner; }
};

int main() {
	InkJetPrinter* in = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* la = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : ";
	in->show();
	cout << "레이저 : ";
	la->show();

	int op, c;
	char ch;
	while (true) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> op >> c;
		if (op == 1) {
			in->print(c);
		}
		else if (op == 2) {
			la->print(c);
		}
		else {
			cout << "다시 입력해주세요.\n";
			continue;
		}
		in->show();
		la->show();

		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> ch;
		if (ch == 'n') {
			break;
		}
		else {
			continue;
		}
	}
	delete in;
	delete la;
	return 0;
}