#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
	
	cout << "\nWhat triangular number do you want : ";
	cin >> n;
	
	for (int i=1; i<=n; i++){
		sum += i;
	}
	
	cout << "\nTriangular number is " << sum << endl;
	
	return 0;
}
