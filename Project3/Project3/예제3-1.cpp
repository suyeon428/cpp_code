#include <iostream>
using namespace std;


class Circle {
public:
	int radius;
	int innerRadius, outerRadius;
	double getArea();
	double inArea();
	double outArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::inArea() {
	return 3.14 * innerRadius * innerRadius;
}

double Circle::outArea() {
	return 3.14 * outerRadius * outerRadius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "Pizza 면적은 " << area << endl;

	Circle donut_two;
	donut_two.innerRadius = 1;
	donut_two.outerRadius = 3;
	double innerarea = donut_two.inArea();
	double outterarea = donut_two.outArea();
	cout << "donut 내부 원의 면적은 " << outterarea - innerarea << endl;
}