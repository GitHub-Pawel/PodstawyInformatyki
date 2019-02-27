//============================================================================
// Name        : Lab6.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on occurence counting
//============================================================================

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int digits[] = {2, 4, 5, 3, 2, 5, 6, 3, 5, 7, 9, 2, 1, 2, 3, 4, 5, 6, 4, 3, 2, 6, 3, 4, 4, 1, 3, 7, 9, 5, 9, 2, 3, 1, 2, 3, 4, 5, 6, 2, 1, 2, 3, 4, 5, 3, 2, 7, 7, 7};

  sort (digits, digits+sizeof(digits)/sizeof(int));

  int j=1;
  for (int i=1; i<sizeof(digits)/sizeof(int); i++){
	  if (digits[i]==digits[i-1]) j++;
	  else{
		  cout << digits[i-1] << "-" << j << endl;
		  j=1;
	  }
  }

  cout << digits[sizeof(digits)/sizeof(int)-1] << "-" << j << endl; //number of occurrences of the biggest element


  return 0;
}

