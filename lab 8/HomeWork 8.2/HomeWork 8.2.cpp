#include <iostream>
#include<cmath>

using namespace std;

class ComplexNumber {
public:
	double real, imag;
	ComplexNumber(double realI = 0, double imagI = 0) {
		real = realI;
		imag = imagI;
	}

	template <typename T>
	friend bool operator >(const ComplexNumber& x, T y)
	{
		return sqrt(x.real * x.real + x.imag * x.imag) > sqrt(y * y);
	}
};


int main()
{
	ComplexNumber z(3, 4);
	float f = 6.0;
	
	bool r = (z > f);

	if(r==1)
		cout<< "the complex number is greater than the float number" << endl;
	else
		cout << "the float number is greater than the complex number" << endl;

	return 0;
};

