//============================================================================
// Name        : Lab4_3.cpp
// Author      : Michal Grega
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Excercise on conditional statemets
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int age=0; //Holds age

	cout << "Please provide your age: ";
	cin >> age;
	cout << "Age: "<<age<<endl;

	if(age>=65){
		cout<< "Welcome to the senior section of our service"<<endl;
	}else if(age>=18 && age<65){
		cout<< "Welcome to the main section of our service"<<endl;
	}else if(age<18){
		cout<< "Sorry, you are too young for our service"<<endl;
	}
	
	return 0;
}