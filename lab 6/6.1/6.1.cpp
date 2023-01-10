#include<iostream>
#include<cmath>

using namespace std;


class Complex {
private:
	double real, iamg;
public:
	Complex(double real = 0, double iamg = 0) {
		this->real =real;
		this->iamg = iamg;
	}

	// ~ operator overloading
	float operator ~ () {
		return sqrt(this->real * this->real + this->iamg * this->iamg);
	}

	// ^ operator overloading
	Complex operator ^ (int power) {
		Complex result;
		result.real = this->real * this->real - this->iamg * this->iamg;
		result.iamg = this->real * this->iamg + this->iamg * this->real;
		return result;
	}

	// + operator overloading
	Complex operator + (Complex const& obj) {
		Complex result;
		result.real = this->real + obj.real;
		result.iamg = this->iamg + obj.iamg;
		return result;
	}

	void print() {
		cout << this->real << " + " << this->iamg <<"i"<<endl;
	}
};

int main()
{
	Complex z1(1, 5);
	Complex z2(2, 4);
	Complex z3 = z1 ^ 2;
	Complex z4 = z1 + z2;

	cout << "The module of the first complex number is " << endl;
	float nr = ~z1;
	cout << nr << endl;

	cout << "\n The first complex number power 2 is " << endl;
	z3.print();
	
	cout << "\n The sum of the two complex numbers is " << endl;
	z4.print();

}
