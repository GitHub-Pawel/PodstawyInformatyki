//============================================================================
// Name        : Lab7.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on addressing
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int tab[2] = {3, 7};
  double tab2[2] = {3.0, 7.0};
  char tab3[2] = {3, 7};

  cout << &tab[0] << endl; //address of <int> table first element
  cout << &tab[1] << endl; //address of <int> table second element
  cout << endl;

  cout << &tab2[0] << endl; //address of <double> table first element
  cout << &tab2[1] << endl; //address of <double> table second element
  cout << endl;

  cout <<(void*) &tab3[0] << endl; //address of <char> table first element
  cout <<(void*) &tab3[1] << endl; //address of <char> table second element
  cout << endl;

  return 0;
}

