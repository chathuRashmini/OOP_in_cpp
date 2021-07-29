#include <iostream>
using namespace std;

int main() {
	int i,j,k;
	
	for (i=1;i<=7;i++) {
		for (j=1; j<=i; j++) {
			cout << j ;
		}
		for (k=j; k<=7; k++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
