#include <iostream>
using namespace std;

class Stack {
	int s[100];
	int t;
public:
	Stack() { t = -1; }
	bool operator !() {
		if (t == -1) return true;
		else return false;
	}
	Stack& operator<< (int x) {
		t++;
		s[t] = x;
		return *this;
	}
	Stack& operator>> (int& x) {
		x = s[t];
		t--;
		return *this;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}