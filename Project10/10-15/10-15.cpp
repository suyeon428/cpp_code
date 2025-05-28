#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) {
		this->radius = radius; this->name = name;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

void run() {
	int op, radius;
	string name;
	vector<Circle*> v;
	cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;
	while (true) {
		cout << "삽입:1, 삭제:2, 모두보기:3. 종료:4 >> ";
		cin >> op;
		if (op == 1) {
			cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
			cin >> radius >> name;
			v.push_back(new Circle(radius, name));
		}
		else if (op == 2) {
			vector<Circle*>::iterator it;
			it = v.begin();
			cout << "삭제하고자 하는 원의 이름은 >> ";
			cin >> name;
			while (it != v.end()) {
				Circle* p = *it;
				if (p->getName() == name) {
					delete p;
					it = v.erase(it);
				}
				else {
					it++;
				}
			}
		}
		else if (op == 3) {
			for (int i = 0; i < size(v); i++) {
				cout << v[i]->getName() << endl;
			}
			cout << endl;
		}
		else if (op == 4) {
			for (auto p : v) {
				delete p;
			}
			v.clear();
			break;
		}
	}
}

int main() {
	run();
}