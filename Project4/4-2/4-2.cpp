#include <iostream>
using namespace std;


int main() {
	float sum = 0;
	int* p = new int[5];
	cout << "���� 5�� �Է�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		sum += p[i];
	}
	cout << "��� " << sum / 5 << endl;
	delete[] p;
}