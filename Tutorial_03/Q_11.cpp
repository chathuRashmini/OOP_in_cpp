#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char arr1[] = "Good Morning";
	char arr2[20];
	
	strcpy(arr2, arr1);
	
	cout << arr2;
	
	return (0);
}
