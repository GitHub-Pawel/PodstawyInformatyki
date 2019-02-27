#include <iostream>
#include <cmath>

using namespace std;

struct coefficients{
	long double a;
	long double b;
	long double c;
};

struct roots{
	long double root_0;
	long double root_1;
	long double root_2;
	short int number_of_roots;

};

long double delta (coefficients *p){
	return (p->b) * (p->b) -4 * (p->a) * (p->c);
}

long double x0(coefficients *p){
	return -(p->b) / (2 * (p->a) );
}

long double x1(coefficients *p){
	return ( -(p->b) - sqrt(delta( p ) ) ) / (2 * (p->a) );
}

long double x2(coefficients *p){
	return ( -(p->b) + sqrt(delta( p ) ) ) / (2 * (p->a) );
}

void count_roots(coefficients *f, roots *r){
		if (delta( f ) < 0){
			r->number_of_roots = 0;
		}

		else if ( delta( f )  == 0){
			r->number_of_roots = 1;
			r->root_0 = x0( f );
		}

		else{
			r->number_of_roots = 2;
			r->root_1 = x1( f );
			r->root_2 = x2( f );
		}
}


int main(){

	coefficients *f = new coefficients;
	cin >> f->a;
	cin >> f->b;
	cin >> f->c;

	roots *r = new roots;

	count_roots (f, r);

	if (r->number_of_roots == 0){
		cout << "No roots!" << endl;
	}

	else if (r->number_of_roots == 1){
		cout << r->root_0 << endl;
	}

	else{
		cout << r->root_1 << "\t" << r->root_2 << endl;
	}

	delete f;
	delete r;

	return 0;
}
