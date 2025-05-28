#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	string author;
	string name;
	int year;
public:
	Book(int year, string name, string author) {
		this->year = year;
		this->name = name;
		this->author = author;
	}
	string getAuthor() { return author; }
	string getName() { return name; }
	int getYear() { return year; }
	void show() {
		cout << year << "년도, " << name << ", " << author << endl;
	}
};

int main() {
	vector<Book> v;
	string author;
	string name;
	int year;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while (true) {
		cout << "년도>>";
		cin >> year;
		if (year == -1) {
			cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
			break;
		}
		cin.ignore();
		cout << "책이름>>";
		getline(cin, name);

		cout << "저자>>";
		getline(cin, author);

		Book book(year, name, author);
		v.push_back(book);
	}
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	cin.ignore();
	getline(cin, author);
	for (int i = 0;i < v.size();i++) {
		if (v[i].getAuthor() == author) {
			v[i].show();
		}
	}
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> year;
	for (int i = 0; i < v.size();i++) {
		if (v[i].getYear() == year) {
			v[i].show();
		}
	}
}