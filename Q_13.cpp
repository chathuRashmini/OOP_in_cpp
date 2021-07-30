#include<iostream>
#include <string.h>
using namespace std;

int main() {
	char arr1[] = "Edward";
	char arr2[] = "edward";
	char arr3[] = "Edward";
	
	if (strcmp(arr1, arr3) == 0) {
		cout << "Edward = Edward" << endl;
	}
	
	if (strcmp(arr1, arr2) == 0) {
		cout << "Edward = edward" << endl;
	}
	
	return (0);
}
