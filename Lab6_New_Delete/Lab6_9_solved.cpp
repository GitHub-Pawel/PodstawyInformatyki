#include <iostream>
using namespace std;

int main() {
	char tab[26];
	char *p=tab;

	for (int i=0; i<26; i++){
		tab[i]=(int)'a'+i;
	}

	for (int i=0; i<26/2; i++){
		cout<<*p<<endl;
		p+=2;
	}
	cout<<endl;

	p=tab;
	int prev=0, n=0;
	while (prev+n<26){
		cout << *(p+prev+n) << endl;
		prev+=n;
		++n;
	}

  return 0;
}

