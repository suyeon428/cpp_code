#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string str;
public:
	Histogram(string str);
	void put(string s);
	void putc(char ch);
	void print();
};

Histogram::Histogram(string str) {
	this->str = str;
}

void Histogram::put(string s) {
	str.append(s);
}

void Histogram::putc(char ch) {
	str.append(1, ch);
}

void Histogram::print() {
	int al[26] = { 0 };
	int total = 0;
	cout << str << '\n' << endl;

	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}
	for (int i = 0; i < str.length(); i++) {
		for (int j = 'a'; j <= 'z'; j++) {
			if (str[i] == j) {
				total++;
				al[j - 97]++;
			}
		}
	}

	cout << "ÃÑ ¾ËÆÄºª ¼ö " << total << '\n' << endl;
	for (int i = 'a'; i <= 'z'; i++) {
		cout << char(i) << "(" << al[i - 97] << ")" << "\t:";
		for (int j = 0;j < al[i - 97]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}