#include <iostream>

using namespace std;

int tab[] = {1, 5, 3, 10};
int tab2[10];

int main(){
	
	for (int i=1; i<=10; i++){
		tab2[i-1]=i*i;
	}

	for (int i=0; i<4; i++){
	cout << tab[i]*tab[i] << endl;
	}

	return 0;
}
