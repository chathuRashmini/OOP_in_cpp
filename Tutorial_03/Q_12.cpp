#include<iostream>
#include <string.h>
using namespace std;

int main() {
	char arr1[20] = "You";
	char arr2[20] = " are ";
	char arr3[30];
	
	strcat(arr1, arr2);
	strcat(arr1, "perfect.");
	strcat(arr3, arr1);
	cout << arr3 ;
	
	return (0);
}
