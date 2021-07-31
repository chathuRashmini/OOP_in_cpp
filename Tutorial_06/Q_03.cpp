#include <iostream>
using namespace std;

int main() {
	int num[3], i, max, mid;
	
	for (i=0; i<3; i++) {
		cout << "Enter number " << i << ": ";
		cin >> num[i];
	}
	
	max = (num[0]>num[1] && num[0]>num[2]) ? num[0] : ( (num[1]>num[0] && num[1]>num[2]) ? num[1] : num[2] );
	cout << "Maximum number is: " << max << endl;

	mid = ((num[0]>num[1] && num[0]<num[2]) || ((num[0]<num[1] && num[0]>num[2]))) ? num[0] : ( ( (num[1]>num[0] && num[1]<num[2]) || (num[1]<num[0] && num[1]>num[2]) ) ? num[1] : num[2] );
	cout << "Middle number is: " << mid << endl;
		
	return (0);
}
