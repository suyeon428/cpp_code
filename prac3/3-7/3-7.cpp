//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class SelectableRandom {
//public:
//	bool op;
//	SelectableRandom(bool even);
//	int next();
//	int nextInRange(int s, int e);
//};
//
//SelectableRandom::SelectableRandom(bool even) {
//	srand((unsigned)time(0));
//	op = even;
//}
//int SelectableRandom::next() {
//	if (op) {
//		while (true) {
//			int n = rand();
//			if (n % 2 == 0) {
//				return n;
//				break;
//			}
//		}
//	}
//	else {
//		while (true) {
//			int n = rand();
//			if (n % 2 == 1) {
//				return n;
//				break;
//			}
//		}
//	}
//
//}
//int SelectableRandom::nextInRange(int s, int e) {
//	if (op) {
//		while (true) {
//			int n = rand() % (e - s + 1) + s;
//			if (n % 2 == 0) {
//				return n;
//				break;
//			}
//		}
//	}
//	else {
//		while (true) {
//			int n = rand() % (e - s + 1) + s;
//			if (n % 2 == 1) {
//				return n;
//				break;
//			}
//		}
//	}
//	
//}
//
//int main() {
//	SelectableRandom er(true);
//	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개 --" << endl;
//	for(int i = 0; i < 10; i++) {
//		int n = er.next();
//		cout << n << ' ';
//	}
//	SelectableRandom oddr(false);
//	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = oddr.nextInRange(2, 9);
//		cout << n << ' ';
//	}
//	cout << endl;
//}