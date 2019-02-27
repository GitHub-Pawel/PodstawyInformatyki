#include <iostream>
using namespace std;

int main() {
	int *p;

	for (int i=0; i<1; ++i){
		p=&i;
		cout<<*p<<endl;
		cout<<p<<endl;
	}

	cout<<*p<<endl;
	cout<<p<<endl;

	cout<<endl;


	if (true){
		int i=0;
		cout<<*p<<endl;
		cout<<p<<endl;
	}

	cout<<*p<<endl;
	cout<<p<<endl;

	return 0;
}

