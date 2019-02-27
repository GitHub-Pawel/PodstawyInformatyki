#include <iostream>
using namespace std;

	int tab4[4] = {1, 5, 3, 7};
	int tab3[3];
	int tab2[2];
	int tab1[1];
	int *p[4];

	void refresh (){
	    p[0] = tab1;
	    p[1] = tab2;
    	    p[2] = tab3;
	    p[3] = tab4;
	}

int main(){

	refresh();

	for (int i=0; i<4; i++){

		*p[2] += *p[3];

		if (i<2){
		++p[2];
		}

		++p[3];
	}


	refresh();

	for (int i=0; i<4; i++){

		*p[1] += *p[3];

		if (i==0){
			++p[1];
		}

			++p[3];
	}


	refresh();

	for (int i=0; i<4; i++){

		*p[0] += *p[3];

		++p[3];
	}


	refresh();

	for (int i=0; i<4; i++){

		for (int j=0; j<4-i; j++){

			cout << *(p[3-i] +j ) << " ";
		}

		cout<<endl;
	}

	return 0;
}

