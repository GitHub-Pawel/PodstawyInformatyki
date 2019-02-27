#include <iostream>
using namespace std;

struct car{
	int displacement;
	int seats;
};

int main() {

	car *p = new car;

	p->displacement = 98;
	p->seats = 5;

	cout << p->displacement << endl << p->seats << endl;

	delete p;

	return 0;
}

