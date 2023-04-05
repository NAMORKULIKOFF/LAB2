#include <iostream>
#include <math.h>


using namespace std;


double polynom(double x){
	
	x = pow(x,4) - 8*pow(x,3) + 24*pow(x,2) - 32*x + 16;
	
	return x;
}

int main()
{
	double x;
	cout << "ВВЕДИТЕ ЧИСЛО, В КОТОРОМ ХОТИТЕ ПОСЧИТАТЬ ЗНАЧЕНИЕ ПОЛИНОМА: " << endl;
	cin >> x;
	cout << polynom(x) << endl;

  return 0;
}
