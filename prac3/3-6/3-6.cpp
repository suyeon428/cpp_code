//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class EvenRandom {
//public:
//	EvenRandom();
//	int next();
//	int nextInRange(int s, int e);
//};
//
//EvenRandom::EvenRandom() {
//	srand((unsigned)time(0));
//
//}
//int EvenRandom::next() {
//	while (true) {
//		int n = rand();
//		if (n % 2 == 0) {
//			return n;
//			break;
//		}
//	}
//
//}
//int EvenRandom::nextInRange(int s, int e) {
//	while (true) {
//		int n = rand() % (e - s + 1) + s;
//		if (n % 2 == 0) {
//			return n;
//			break;
//		}
//	}
//}
//
//int main() {
//	EvenRandom r;
//	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
//	for(int i = 0; i < 10; i++) {
//		int n = r.next();
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextInRange(2, 10);
//		cout << n << ' ';
//	}
//	cout << endl;
//}