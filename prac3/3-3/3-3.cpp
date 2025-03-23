//#include <iostream>
//#include <string>
//using namespace std;
//
//class Account {
//public:
//	string name;
//	int id, balance;
//	Account(string n, int i, int b);
//	void deposit(int money);
//	int withdraw(int money);
//	string getOwner();
//	int inquiry();
//};
//
//Account::Account(string n, int i, int b) {
//	name = n;
//	id = i;
//	balance = b;
//}
//
//void Account::deposit(int money) {
//	balance += money;
//}
//
//int Account::withdraw(int money) {
//	balance -= money;
//	return balance;
//}
//
//string Account::getOwner() {
//	return name;
//}
//
//int Account::inquiry() {
//	return balance;
//}
//
//int main() {
//	Account a("kitae", 1, 5000);
//	a.deposit(50000);
//	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
//	int money = a.withdraw(20000);
//	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
//}