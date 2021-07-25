//Declare a class Shape which keeps width and height
//Declare derived classes rectangle and triangle
//which display areas

#include <iostream>
using namespace std;

class Shape
{
	protected:
		float width, height;
	
	public:
		Shape(float w=0, float h=0) {
			width = w;
			height = h;
		}
		
		void set_data (float a, float b)
		{
			width = a; height = b;
		}
};

class Triangle: public Shape {
	private:
		float triangleArea() {
			return (width*height)/2;
		}
	
	public:
		void displayArea(){
			cout << "\nArea of the triangle = " << triangleArea() << endl;
		}
};

class Rectangle: public Shape {
	private:
		float rectangleArea() {
			return width*height;
		}
	
	public:
		void displayArea(){
			cout << "\nArea of the rectangle = " << rectangleArea() << endl;
		}
};

int main() {
	Triangle tri;
	Rectangle rect;
	
	tri.displayArea();
	tri.set_data(10, 20);
	tri.displayArea();
	
	rect.displayArea();
	rect.set_data(10,20);
	rect.displayArea();
	
	return 0;
}
