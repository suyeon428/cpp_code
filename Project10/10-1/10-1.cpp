#include <iostream>
#include <string>
using namespace std;

template <class T>
T biggest(T x[], int y) {
	T max = x[0];
	for (int i = 0;i < y;i++) {
		if (max < x[i]) {
			max = x[i];
		}
	}
	return max;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	char y[] = { 'a', 'w', 'e', 'u', 'r' };
	cout << biggest(x, 5) << endl;
	cout << biggest(y, 5) << endl;
}