#include <iostream>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};


CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	string na;
	int ra;

	for (int i = 0; i < size; i++) {
		cout << "원 " << i+1 << "의 이름과 반지름 >> ";
		cin >> na >> ra;
		p[i].setCircle(na, ra);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string n;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> n;

	for (int i = 0; i < size; i++) {
		if (n == p[i].getName()) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea() {
	int num;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> num;
	cout << num << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > num) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
		}
	}
}

int main() {
	int c;
	cout << "원의 개수 >> ";
	cin >> c;
	CircleManager circles(c);
	circles.searchByName();
	circles.searchByArea();
}