#include <iostream>
#include<cmath>

using namespace std;

class ComplexNumber {
public:
	double real, imag;
	ComplexNumber(double realI=0, double imagI=0) {
		real = realI;
		imag = imagI;
	}
	double modul() {
		return sqrt(real *real + imag *imag);
	}
};


template <typename T>
T closestToOrigin(ComplexNumber z1, ComplexNumber  z2) {
	if (z1.modul() < z2.modul()) {
		return z1;
	}
	else {
		return z2;
	}
};

int main()
{
	ComplexNumber z1(20, 4);
	ComplexNumber z2(5, 12);
	ComplexNumber z = closestToOrigin<ComplexNumber>(z1, z2);
	cout<< "Closest complex number to origin: " << z.real << " + " << z.imag << "i" <<endl;
	
	return 0;
	
}
