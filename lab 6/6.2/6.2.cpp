#include<iostream>

using namespace std;

class Complex {
private:
	double real, iamg;
public:
	Complex(double real = 0, double iamg = 0) {
		this->real =real; 
		this->iamg = iamg;
	}
	// + operator overloading
	Complex operator + (Complex const& obj) {
		Complex result;
		result.real = this->real + obj.real;
		result.iamg = this->iamg + obj.iamg;
		return result;
	}
	void print() {
		cout << this->real << " + " << this->iamg << "i"<<endl;
	}
};

int main()
{
	Complex z1(1, 5);
	Complex z2(2, 4);
	Complex z3 = z1 + z2;
	cout << "The sum between z1 and z2 is:" << endl;
	z3.print();

}
