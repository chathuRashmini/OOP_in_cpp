#include <iostream>
using namespace std;

void arr_sort(int a[], int n) {
   int i, j, min, temp;
   
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	
	for (i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int num_arr[5], i;
	
	for (i=0; i<5; i++) {
		cout << "Enter number " << i+1 << ": ";
		cin >> num_arr[i];
	}
	
	arr_sort(num_arr, 5);
	
	return 0;
}
