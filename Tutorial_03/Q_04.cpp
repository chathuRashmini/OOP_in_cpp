#include <iostream>
using namespace std;

int main() {
	int a;
	
	cout << "The value of a is: ";
	cin >> a;
	
	cout << "---------------------------------------------------------------" << endl;
	
	cout << "The value of ++a is: " << ++a << endl;
	cout << "The value of a is: " << a << endl;
	cout << "---------------------------------------------------------------" << endl;
	
	cout << "The value of a++ is: " << a++ << endl;
	cout << "The value of a is: " << a << endl;
	cout << "---------------------------------------------------------------" << endl;
	
	cout << "The value of --a is: " << --a << endl;
	cout << "The value of a is: " << a << endl;
	cout << "---------------------------------------------------------------" << endl;
	
	cout << "The value of a-- is: " << a-- << endl;
	cout << "The value of a is: " << a << endl;
	cout << "---------------------------------------------------------------" << endl;
	
	return 0;
}
