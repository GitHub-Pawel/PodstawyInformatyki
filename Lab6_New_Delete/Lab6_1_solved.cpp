#include <iostream>
using namespace std;

int main() {
	int x=7;
	int *p = &x;

	cout << *p << endl;

	*p*=*p;	//alternative version: (*p) =(*p)*(*p);

	cout << *p << endl;

	return 0;
}

