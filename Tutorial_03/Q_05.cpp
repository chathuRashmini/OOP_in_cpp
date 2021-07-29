#include <iostream>
using namespace std;

int main() {
	int num[3], i;
	int max;
	
	for (i=0; i<3; i++) {
		cout << "Enter number " << i << ": ";
		cin >> num[i];
	}
	
	if (num[0] >= num[1] && num[0] >= num[2]) {
		max = num[0];
	}
	else if (num[1] >= num[0] && num[1] >= num[2]) {
		max = num[1];
	}
	else {
		max = num[2];
	}
	
	cout << "The maximum number is: " << max << endl;
	
	return 0;
}
