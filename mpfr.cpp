#include <iostream>
#include <math.h>
#include <mpreal.h>

using namespace std;
using namespace mpfr;

int main()
{
	double x;
	cout << "ВВЕДИТЕ ЧИСЛО, В КОТОРОМ ХОТИТЕ ПОСЧИТАТЬ ЗНАЧЕНИЕ ПОЛИНОМА: " << endl;
	cin >> x;
	
	mpfr_set_default_prec(256);
	mpreal f=pow(x,4) - 8*pow(x,3) + 24*pow(x,2) - 32*x + 16;
	cout << f << endl;

  return 0;
}


