#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* p = new T[sizea + sizeb];
	for (int i = 0;i < sizea;i++) {
		p[i] = a[i];
	}
	for (int i = 0;i < sizeb; i++) {
		p[i + sizea] = b[i];
	}
	return p;
}

int main() {
	double x[] = { 1.2, 2.3, 2.5, 4.6 };
	double y[] = { 5.5, 6.5, 4.3, 7.7, 8.6 };
	double* z = concat(x, 4, y, 5);
	for (int i = 0;i < 9;i++) {
		cout << z[i] << ' ';
	}

	cout << endl;
	delete[] z;
}