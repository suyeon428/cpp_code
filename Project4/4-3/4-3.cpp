#include <iostream>
#include <string>
using namespace std;


int main() {
	char str;
	int count = 0;
	cout << "���ڿ� �Է�>> ";
	// �Է¹ޱ� getline�ᰡ����

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') {
			count++;
		}
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
}