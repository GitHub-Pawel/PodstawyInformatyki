#include <iostream>
using namespace std;

struct my{
	char first;
	int second;
};

int main() {
	short int tab[] = {1, 4, 2, 3, 5, 7, 6, 9, 8, 0};	//length tab[] = 10
	short int *p = tab;

	double tab2[] = {1.23456, 5.4321, 5.0, .34, .54, 34.34, 234.0, 3.13, 2.72, .19};	//length tab2[] = 10
	double *p2 = tab2;

	my tab3[10];
	my *p3 = tab3;

	for (int i=0; i<10; ++i){
		tab3[i].first=(int)'a'+i;
		tab3[i].second=i;
	}


	for (int i=0; i<5; i++){
		swap(*(p+i), *(p+9-i));
		swap(*(p2+i), *(p2+9-i));
		swap((p3+i)->first, (p3+9-i)->first);
		swap((p3+i)->second, (p3+9-i)->second);
	}


	for (int i=0; i<10; ++i){
		cout << "tab[" << i << "] = " << *p << endl;
		++p;
	}
	cout<<endl;

	for (int i=0; i<10; ++i){
		cout << "tab2[" << i << "] = " << *p2 << endl;
		++p2;
	}
	cout<<endl;

	for (int i=0; i<10; ++i){
		cout << "tab3[" << i << "].first = " << p3->first;
		cout << "\t\t tab3[" << i << "].second = " << p3->second << endl;
		++p3;
	}

}
