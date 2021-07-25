#include <iostream>
using namespace std;

class Rectangle{
	int m_width; 
	int m_height;
		
	public:
		Rectangle(int w, int h);  
		
		void DisplayArea(void);  
		
		~Rectangle(){
			cout << "\nThe object is deleted!"
			<< endl;
		}
};

Rectangle::Rectangle(int w, int h){
	m_width = w;
	m_height = h;
}

void Rectangle::DisplayArea(){
	cout << "\nArea = " << m_width*m_height << endl;
}

int main(){
	Rectangle r(10,20);
	r.DisplayArea();
	
	return 0;
}
