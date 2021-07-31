#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
	friend float addreal(Complex&, Complex&);
	friend float addimag(Complex&, Complex&);
	
	private:
		float real;
		float imag;
	
	public:
		Complex(float = 0, float = 0);
		void display();
};

Complex::Complex(float rl, float im)
{
	real = rl;
	imag = im;
}

void Complex::display()
{
	char sign = '+';
	
	if(imag < 0)
		sign = '-';
	cout << real << sign << fabs(imag) << 'i';
}

float addreal(Complex &a, Complex &b)
{
	return(a.real + b.real);
}

float addimag(Complex &a, Complex &b)
{
	return(a.imag + b.imag);
}

int main()
{
	Complex a(3.2, 5.6), b(1.1, -8.4);
	float re, im;
	
	cout << "\nThe first complex number is ";
	a.display();
	cout << "\nThe second complex number is ";
	b.display();
	
	re = addreal(a,b);
	im = addimag(a,b);
	
	Complex c(re,im);
	cout << "\n\nThe sum of these two complex numbers is ";
	c.display();
	
	return 0;
}

