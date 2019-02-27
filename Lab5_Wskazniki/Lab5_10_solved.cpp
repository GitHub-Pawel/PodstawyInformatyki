#include <iostream>
using namespace std;

int main() {
	char words[] = "Teleinformatyka Podstawy Informatyki";
	char *pointer = words;

	while (*pointer!=' ') pointer++;	//go to first space
	pointer++;	//go to first letter of second word

	while (*pointer){
		cout<<*(pointer++);
	}

	return 0;
}

