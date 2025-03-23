#include <iostream>
using namespace std;

//int main() {
//	int i, j, a=1;
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			cout << a++;
//			cout << "	";
//		}
//		cout << "\n";
//	}
//	//cout << "1	2	3	4	5	6	7	8	9	10\n";
//	//cout << "11	12	13	14	15	16	17	18	19	20\n";
//	//cout << "21	22	23	24	25	26	27	28	29	30\n";
//	// cin >> a >> b;
//
//	return 0;
//}

//int main() {
//	int i, j;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j < 10; j++) {
//			cout << i << "x" << j << "=" << i * j<<" ";
//		}
//		cout << "\n";
//	}
//}

//int main() {
//	int a, b;
//	cout << "두 수를 입력하라>>";
//	cin >> a >> b;
//
//	if (a > b) {
//		cout << "큰 수 = " << a;
//	}
//	else {
//		cout << "큰 수 = " << b;
//	}
//}

//int main() {
//	int i;
//	double ar[5];
//	cout << "5개의 실수를 입력하라>>";
//	for (i = 0; i < 5; i++) {
//		cin >> ar[i];
//	}
//
//	double max = ar[0];
//	for (i = 0; i < 5; i++) {
//		if (ar[i] > max) {
//			max = ar[i];
//		}
//	}
//	cout << "제일 큰 수 = " << max;
//}

//int main() {
//	char str[100];
//	int i, count=0;
//
//	cout << "문자들을 입력하라(100개 미만.)\n";
//	cin.getline(str, 100);
//	for (i = 0; i < 100; i++) {
//		if (str[i] == 'x') {
//			count++;
//		}
//	}
//	cout << "x의 개수는 "<<count;
//}

//int main() {
//	string str, str2;
//	cout << "새 암호를 입력하세요>>";
//	cin >> str;
//	cout << "새 암호를 다시 한 번 입력하세요>>";
//	cin >> str2;
//
//	if (str == str2) {
//		cout << "같습니다";
//	}
//	else {
//		cout << "같지 않습니다";
//	}
//}

int main() {
	char str[100];

	while (true) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(str, 100);
		char yes[] = "yes";
		bool b = true;

		for (int i = 0; i < 4; i++) {
			if (str[i] != yes[i]) {
				b = false;
				break;
			}
		}

		if (b == true) {
			cout << "종료합니다...";
			break;
		}
	}
	return 0;
}