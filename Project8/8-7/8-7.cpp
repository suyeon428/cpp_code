#include <iostream>
#include <string>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void setData(char a, int l) { mem[l] = a; }
	void setData(char a[], int l) {
		for (int i = 0; i < l; i++) {
			mem[i] = a[i];
		}
	}
	char getData(int idx) { return mem[idx]; }
};

class ROM : public BaseMemory {
public:
	ROM(int size, char a[], int l) : BaseMemory(size) { setData(a, l); }
	char read(int idx) { return getData(idx); }
};

class RAM : public BaseMemory {
public:
	RAM(int size) : BaseMemory(size) {}
	void write(int idx, char d) { setData(d, idx); }
	char read(int idx) { return getData(idx); }
};

int main() {
	char x[5] = { 'h','e','l','l','o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0;i < 5;i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0;i < 5;i++) cout << mainMemory.read(i);
}