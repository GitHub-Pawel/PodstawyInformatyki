#include <iostream>

using namespace std;

short int j=1;
int tab[1000];

int main()
{
	for (int i=0; i<1000; i++){
		tab[i]=j;
		j+=i*i*i;
	}

	/*
	for (int i=0; i<1000; i++){
	cout<<i<<"-"<<tab[i]<<endl;
	}
	*/

	int min=tab[0], max=tab[0], sum=0;
	
	for (int i=0; i<1000; i++){

		sum+=tab[i];

		if (tab[i]>max){
			max=tab[i];
		}

		if (tab[i]<min){
			min=tab[i];
		}
	}

	float srednia=sum/1000;

	cout<<"Suma = "<<sum<<endl;
	cout<<"Minimum = "<<min<<endl;
	cout<<"Maksimum = "<<max<<endl;
	cout<<"Srednia = "<<srednia<<endl;
		

	return 0; 
}
