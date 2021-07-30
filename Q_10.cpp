#include <iostream>
using namespace std;

int main() {
	int radius, area, volume;
	const int pi = 3.4;
	
	cout << "Enter radius: ";
	cin >> radius;
	
	area = 4*pi*radius*radius;
	volume = (3*pi*radius*radius*radius)/4;
	
	cout << "The area of sphere = " << area << endl;
	cout << "The volume of sphere = " << volume << endl;
	
	return (0);
}
