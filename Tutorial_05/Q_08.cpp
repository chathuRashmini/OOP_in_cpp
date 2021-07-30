#include <iostream>
using namespace std;

int main() {
	int i, j, c=0;
	
	for(i=1;i<=100;i++){
		for(j=1; j<=i/2; j++) {
			if(i%j == 0) {
				c++;
			}
		}
		if(c == 1) {
			cout << i << endl;
		}
		c = 0;
	}

	return 0;
}
