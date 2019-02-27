//============================================================================
// Name        : Lab7_3.cpp
// Author      : Michal Grega
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Demonstration of calloc
//============================================================================

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	   long int size = 1000000;
	   int *p = (int *)calloc(size, sizeof(int));

	   for (size_t i = 0; i < size; ++i) {
	       p[i] = i;
	   }

	   free(p);

}

