//============================================================================
// Name        : Lab5.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on array of structures
//============================================================================

#include <iostream>
using namespace std;

struct car{
  int sits;
  float range;
};

int main() {

  car tab[10];
  tab[0].sits = 5;
  tab[0].range = 500;
  car au = {30, 1500};

  tab[1]=au;
  cout<<"tab[1].sits="<<tab[1].sits<<endl;
  cout<<"tab[1].range="<<tab[1].range<<endl;

  cout<<( sizeof(tab) )/( sizeof(int) + sizeof(float) )<<endl;
  //          80               4             4
  
  return 0;
}

