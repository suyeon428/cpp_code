#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int thickness;
	int getArea();
	int getVolume();
};

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getVolume() {
	return width * height * thickness;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	rect.thickness = 4;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "사각형의 체적은 " << rect.getVolume() << endl;
}