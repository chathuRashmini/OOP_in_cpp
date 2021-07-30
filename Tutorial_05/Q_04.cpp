#include <iostream>
using namespace std;

int main() {
	int in_num, i;
	int sum = 0;
	
	cout << "Enter any number: ";
	cin >> in_num;
	
	if(in_num <= 0) {
		cout << "Enter positive numbers only";
	}
	else {
		for (i=1; i<in_num; i++) {
			sum += i;
		}
	}
	cout << "Total sum = " << sum << endl;
	
	return (0);
}
