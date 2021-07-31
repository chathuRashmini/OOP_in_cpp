#include <iostream>
using namespace std;

int main() {
	int temp;
	
	cout << "Enter temperature: ";
	cin >> temp;
	
	if (temp >= 50) {
		cout << "Invalid temperature!";
	}
	else {
		if (temp < 30) {
			cout << "Wear your jacket!";
		}
		else {
			cout << "No need of a jacket";
		}
	}
		
	return (0);
}
