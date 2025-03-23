#include <iostream>
using namespace std;

//int main() {
//	int a = 0;
//	for (int i = 0; i < 10; i++) {
//		a += (i + 1);
//	}
//	cout << "1에서 10까지 더한 결과는 " << a << "입니다";
//}

int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}