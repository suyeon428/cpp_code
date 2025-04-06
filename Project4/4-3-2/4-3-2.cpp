#include <iostream>
#include <string>
using namespace std;


int main() {
	string str;
	int count = 0, idx = 0;
	cout << "문자열 입력>> ";
	getline(cin, str, '\n');

	while (true) {
		idx = str.find('a', idx + 1);
		if (idx == -1) {
			break;
		}
		count++;
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}