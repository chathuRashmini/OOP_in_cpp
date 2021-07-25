#include <iostream>
using namespace std;

class NewRectangle;

class Rectangle {
	protected:
		int width;
		int height;
	public:
		void displayArea(void) {
			cout << "\nArea of the rectangle = "
				<< width*height << endl;
		}
		~Rectangle(){
			cout << "\nBase class destructor" << endl;
		}
};

class NewRectangle: public Rectangle{
	public:
		NewRectangle(int w, int h){
			width = w;
			height = h;
		}
		void SetWidth(int w){
			width = w;
		}
		void SetHeight(int h){
			height = h;
		}
		~NewRectangle(){
			cout << "\nObject of the derived class is deleted!" << endl;
		}
};

int main(){
	NewRectangle MyRectangle(0,0);
	
	MyRectangle.SetWidth(100);
	MyRectangle.SetHeight(20);
	MyRectangle.displayArea();
	
	return 0;
}
