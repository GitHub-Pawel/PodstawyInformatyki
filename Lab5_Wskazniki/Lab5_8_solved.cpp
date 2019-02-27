//============================================================================
// Name        : Lab8.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on reference and dereference
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int *x;
  int y = 2;

  x = &y;
//x = y;	error because I've ascribed value of y to pointer x
  *x = y;
//*x = &y;	error because I've ascribed address of y to value number which is pointing by pointer x

  cout << y <<"\n";
  cout << &y <<"\n";
  cout << x <<"\n";
  cout << *x <<"\n";

  return 0;
}

