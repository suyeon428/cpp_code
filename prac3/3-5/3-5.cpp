//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class Random {
//public:
//	Random();
//	int next();
//	int nextInRange(int s, int e);
//};
//
//Random::Random() {
//	srand((unsigned)time(0));
//
//}
//int Random::next() {
//	return rand();
//
//}
//int Random::nextInRange(int s, int e) {
//	int n = rand() % (e - s + 1) + s;
//	return n;
//}
//
//int main() {
//	Random r;
//	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 �� --" << endl;
//	for(int i = 0; i < 10; i++) {
//		int n = r.next();
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
//	for (int i = 0; i < 10; i++) {
//		int n = r.nextInRange(2, 4);
//		cout << n << ' ';
//	}
//	cout << endl;
//}