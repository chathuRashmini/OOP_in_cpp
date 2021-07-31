#include <iostream>
using namespace std;

int main() {
	int in_num;
	
	cout << "Enter any number: ";
	cin >> in_num;
	
	if (in_num % 2 == 0)
		cout << in_num << " is an even number";
	else
		cout << in_num << " is an odd number";
	
	return (0);
}
