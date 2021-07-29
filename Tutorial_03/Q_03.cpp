#include <iostream>
using namespace std;

int main() {
	int numbers[5];
	int i;
	
	for (i=0; i<5; i++) {
		cout << "Enter number " << i << ": ";
		cin >> numbers[i];
	}
	cout << endl;
	
	for (i=0; i<5; i++) {
		cout << numbers[i] << "		";
	}
	cout << endl;
	
	for (i=4; i>=0; i--) {
		cout << numbers[i] << "		";
	}
	cout << endl;
	
	return 0;
}
