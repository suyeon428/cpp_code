#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string str;
	srand((unsigned)time(0));

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;

	while(true) {
		cout << ">>";
		getline(cin, str);
		if (str == "exit") {
			break;
		}

		int n = rand() % (str.length());
		char ch = 'a' + rand() % 26;
		str[n] = ch;

		cout << str << endl;
	}
}