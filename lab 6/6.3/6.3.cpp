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

	// < operator overloading
	Complex operator < (Complex const& obj) {
		float nr1 = sqrt(this->real * this->real + this->iamg * this->iamg);
		float nr2 = sqrt(obj.real * obj.real + obj.iamg * obj.iamg);
		Complex result;
		if (nr1 < nr2) {
			return *this;
		}

		return obj;
	}

	void print() {
		cout << this->real<< " + " << this->iamg<<"i " << endl;
	}

};

int main()
{
	Complex z1(12, 5);
	Complex z2(4, 7);
	Complex z4 = z1 < z2;
	z4.print();
}