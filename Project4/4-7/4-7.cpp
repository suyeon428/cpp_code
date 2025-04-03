// 7번 완

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle ary[3];
	int a = 0;
	
	for (int i = 0; i < 3; i++) {
		int r;
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		ary[i].setRadius(r);

		if (ary[i].getArea() > 100) {
			a++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << a << "개 입니다" << endl;
}