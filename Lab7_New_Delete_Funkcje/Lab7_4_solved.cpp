#include <iostream>
#include <cmath>

using namespace std;

long double delta (long double a, long double b, long double  c){
	return b*b-4*a*c;
}

long double x0(long double a, long double b, long double c){
	return (-b) / (2*a);
}

long double x1(long double a, long double b, long double c){
	return (-b -sqrt(delta(a, b, c))) / (2*a);
}

long double x2(long double a, long double b, long double c){
	return (-b +sqrt(delta(a, b, c))) / (2*a);
}

int main(){

	long double a, b, c;
	cin>>a>>b>>c;

	if (delta(a, b, c) < 0){
		cout << "No results!" << endl;
	}

	else if (delta(a, b, c) == 0){
		cout << x0(a, b, c) << endl;
	}

	else{
		cout << x1(a, b, c) << "\t" << x2(a, b, c) << endl;
	}

	return 0;
}
