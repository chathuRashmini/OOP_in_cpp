#include <iostream>
using namespace std;

int main() {
	int num[10]; 
	int i, j, t;
	
	for (i=0; i<10; i++) {
		cout << "Enter number " << i << ": ";
		cin >> num[i];
	}
	cout << endl;
	
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			if (num[i] > num[j]) {
				t = num[i];
				num[i] = num[j];
				num[j] = t;
			}
		}
	}
	
	cout << "Ascending order: " ;
	for (i=9; i>=0; i--) {
		cout << num[i] << "  " ;
	}
	cout << endl;
	
	cout << "Descending order: " ;
	for (i=0; i<10; i++) {
		cout << num[i] << "  " ;
	}
	cout << endl;
	
	return 0;
}
