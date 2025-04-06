#include <iostream>
using namespace std;

class Menus {
public:
	Menus();
	int display();
};

Menus::Menus() {}

int Menus::display() {
	int selection;

	cout << "menu" << endl;
	cout << "--------------------------------" << endl;
	cout << "1. insert clients" << endl;
	cout << "2. delete clients" << endl;
	cout << "3. display clients" << endl;
	cout << "4. list clients" << endl;
	cout << "5. reference" << endl;
	cout << "--------------------------------" << endl;
	cout << "please input selections (1~5); ";

	cin >> selection;

	return selection;
}



class Clients {
	int id;
	string name;
	string address;
	string tel;
	string s;

public:
	Clients();
	void insertClient(int newId, string newName, string newTel, string newAddress, string s);
	void displayClient();
};

Clients::Clients() {}

void Clients::insertClient(int newId, string newName, string newTel, string newAddress, string newS) {
	this->id = newId;
	this->name = newName;
	this->tel = newTel;
	this->address = newAddress;
	this->s = newS;
}

void Clients::displayClient() {
	cout << "client id; " << id << ", name: " << name << ", ";
	cout << "client tel; " << tel << ", address; " << address << ", 성별; " << s << endl;
}



int main() {
	int id, sel, count;
	string name, tel, address, s;
	
	Menus menu;
	sel = menu.display();

	cout << "고객의 개수를 입력하시오: ";
	cin >> count;
	Clients* pary = new Clients[count];

	switch (sel) {
	case 1:
		for (int i = 0; i < count; i++) {
			cout << "plz input id; ";
			cin >> id;
			cout << "plz input name; ";
			cin >> name;
			cout << "plz input tel; ";
			cin >> tel;
			cout << "plz input address; ";
			cin >> address;
			cout << "성별을 입력해주세요; ";
			cin >> s;

			pary[i].insertClient(id, name, tel, address, s);
		}
	}
	
	cout << "\n ------ hello,	client display ------ \n";

	for (int i = 0; i < count; i++) {
		pary[i].displayClient();
	}

	delete[] pary;

	return 0;
}