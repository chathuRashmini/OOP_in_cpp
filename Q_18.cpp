#include <iostream>
using namespace std;

int main() {
	int num_arr[5] = {22.5, 33.7, 10.2, 45.23, 6.78};
	int i, j, max;
	max = num_arr[0];
	
	for (i=0; i<5; i++) {
		if (num_arr[i] > max) {
			max = num_arr[i];
		}
	}
	
	cout << "The maximum number is: " << max;
	
	return (0);
}
