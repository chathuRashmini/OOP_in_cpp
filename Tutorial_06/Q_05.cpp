#include <iostream>
using namespace std;

int main() {
	int marks[3], i;
	float avg;
	string msg;
	
	for (i=0; i<3; i++) {
		cout << "Enter marks of the subject " << i+1 << ": ";
		cin >> marks[i];
		
		if (marks[i] < 0) {
			cout << "Invalid marks entry" << endl;
			return 0;
		}
	}
	
	avg = float(marks[0] + marks[1] + marks[2])/3.0;
	
	if (avg >=70) {
		msg = "Very Good";
	}
	else if (avg >= 55) {
		msg = "Good";
	}
	else if (avg >=40) {
		msg = "Pass";
	}
	else {
		msg = "Fail";
	}
	
	cout << msg;
	
	return (0);
}
