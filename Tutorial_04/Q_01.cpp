#include <iostream>
#include <math.h>
using namespace std;

const double PI = 2.0 * asin(1.0);

class Circle
{
	protected:
		double radius;
	
	public:
		Circle(double = 1.0);
		double calcArea();
};

Circle::Circle(double r)
{
	radius = r;
}

double Circle::calcArea()
{
	return(PI * radius * radius);
}

class Cylinder : public Circle
{
	protected:
		double length; 
	
	public: 
		Cylinder(double r = 1.0, double l = 1.0):Circle(r), length(l){}
		double calcVolume();
};

double Cylinder::calcVolume()
{
  	return length * Circle::calcArea();
}

int main()
{
	Circle circle_1, circle_2(2);
	Cylinder cylinder_1(2,4);
	
	cout << "The area of default circle is " << circle_1.calcArea() << endl;
	cout << "The area of circle with radius 2 is " << circle_2.calcArea() << endl;
	cout << "The volume of cylinder_1 is " << cylinder_1.calcVolume() ;
	
	circle_1 = cylinder_1;
	
	cout << "\nThe area of circle_1 is now " << circle_1.calcArea() ;
	
	return 0;
}

