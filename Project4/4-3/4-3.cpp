#include <iostream>
#include <string>
using namespace std;


int main() {
	char str;
	int count = 0;
	cout << "문자열 입력>> ";
	// 입력받기 getline써가지고

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') {
			count++;
		}
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}