// CPP implementation of
// above function
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

// Driver program
int main() {
	double x = 5.35, significand;
	int exponent;

	significand = frexp(x, &exponent);
	cout << x << " = " << significand << " * 2^" << exponent << endl;

	_getch();
	return 0;
}
