//#include <iostream>
//#include <string>
//using namespace std;
//
//class Date {
//public:
//	int year, month, day;
//	Date(int y, int m, int d);
//	Date(string str);
//	void show();
//	int getYear();
//	int getMonth();
//	int getDay();
//};
//
//Date::Date(int y, int m, int d) {
//	year = y;
//	month = m;
//	day = d;
//}
//
//Date::Date(string str) {
//	int f = str.find('/');
//	year = stoi(str.substr(0, f));
//
//	int s = str.find('/', f + 1);
//	month = stoi(str.substr(f + 1, s - f - 1));
//	day = stoi(str.substr(s + 1));
//}
//
//void Date::show() {
//	cout << year << "³â" << month << "¿ù" << day << "ÀÏ\n";
//}
//
//int Date::getYear() {
//	return year;
//}
//
//int Date::getMonth() {
//	return month;
//}
//
//int Date::getDay() {
//	return day;
//}
//
//int main() {
//	Date birth(2014, 3, 20);
//	Date independenceDay("1945/8/15");
//	independenceDay.show();
//	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
//}