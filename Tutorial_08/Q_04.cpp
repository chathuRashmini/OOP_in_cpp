#include <iostream>
using namespace std;

int main() {
	float num_arr[5] = {22.5, 33.7, 10.2, 45.23, 6.78};
	int i;
	float max = num_arr[0];
	
	for (i=1; i<10; i++) {
		if (num_arr[i] > max) {
			max = num_arr[i];
		}
	}
	
	cout << "Max: " << max << endl;
	
	return (0);
}
