#include <iostream>
using namespace std;

class Circle {
	int radius;
	float CalArea() {
		return 3.14*radius*radius;
	}
	
	public:
		int color;
		Circle(int r);
		void SetRadius(int r);
		void SetRadius(int r, int c);
		int GetRadius();
		void DisplayArea();
		~Circle(){
		}
};

Circle::Circle(int r){
	radius = r;
	color = 0;
}

void Circle::SetRadius(int r) {
	radius = r;
	color = 255;
}

void Circle::SetRadius(int r, int c) {
	radius = r;
	color = c;
}

int Circle::GetRadius() {
	return radius;
}

void Circle::DisplayArea() {
	cout << "Area of the circle: " << CalArea() << endl;
}

int main() {
	Circle c1(10), c2(20);
	cout << "Radius of c1 is: " << c1.GetRadius() << endl;
	cout << "Circle of c1 color is: " << c1.color << endl;
	
	cout << endl;
	
	c2.SetRadius(30, 100);
	cout << "Radius of c2 is: " << c2.GetRadius() << endl;
	cout << "Circle of c2 color is: " << c2.color << endl;
	c2.DisplayArea();
	
	cout << endl;
	
	c1.SetRadius(20);
	cout << "Radius is: " << c1.GetRadius() << endl;
	cout << "Circle color is: " << c1.color << endl;
	c1.DisplayArea();
	
	return 0;
}
