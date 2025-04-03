// 8번 완

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
	int a = 0, n;

	cout << "원의 개수 >> ";
	cin >> n;
	Circle* pAry = new Circle[n];

	for (int i = 0; i < n; i++) {
		int r;
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		pAry[i].setRadius(r);

		if (pAry[i].getArea() > 100) {
			a++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << a << "개 입니다" << endl;
}