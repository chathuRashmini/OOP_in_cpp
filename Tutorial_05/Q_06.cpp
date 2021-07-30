#include <iostream>
using namespace std;

int main() {
	int n, n1,n2, fact2=1, fact = 1, fact1 =1;
	
	cout << "\n---------------------------------------" << endl;
	cout << "\nFinding the factorial using FOR loop." << endl;
	cout << "\nEnter any number : ";
	cin >> n;
	
	if (n==0 || n==1){
		cout << "\nFactorial of the given number is 1." << endl;
	}
	else{
		for (int i=2; i<=n; i++){
			fact = fact* i;
		}
		cout << "\nFactorial of the given number is " << fact << endl;
	}
	
	cout << "\n---------------------------------------" << endl;
	cout << "\nFinding the factorial using WHILE loop." << endl;
	cout << "\nEnter any number : ";
	cin >> n1;
	int i=1;
	while (i<=n1){
		fact1 = fact1*i;
		i++;
	}
	cout << "\nFactorial of the given number is " << fact1 << endl;
	
	cout << "\n---------------------------------------" << endl;
	cout << "\nFinding the factorial using DO-WHILE." << endl;
	cout << "\nEnter any number : ";
	cin >> n2;
	
	int j=1;
	do{
		fact2 = fact2*j;
		j++;
	}while(j != (n2+1));
	cout << "\nFactorial of the given number is " << fact2 << endl;
	
	cout << "\n---------------------------------------" << endl;
	return 0;
}
