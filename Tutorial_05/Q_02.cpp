#include <iostream>
using namespace std;

class calculator{
	private:
		float a;
		float b;
		
	public:
		float Add(float x, float y){
			a = x;
			b = y;
			return a+b;
		}
		float Sub(float x, float y){
			a = x;
			b = y;
			return a-b;
		}
		float mul(float x, float y){
			a = x;
			b = y;
			return a*b;
		}
		float div(float x, float y){
			a = x;
			b = y;
			return a/b;
		}
};

int main(){
	float n1, n2;
	int op;
	calculator c;
	
	cout << "\n---------------Options---------------\n\t1. Addition\n\t2. Subtraction";
	cout << "\n\t3. Multiplication\n\t4. Division\n\t5. Exit\n-------------------------------------" << endl;
	
	do{
		cout << "\n\nEnter the option: ";
		cin >> op;
		
		switch(op){
			case 1:
				cout << "\nEnter num1: ";
				cin >> n1;
				cout << "\nEnter num2: ";
				cin >> n2;
				cout << c.Add(n1,n2);
				break;
				
			case 2:
				cout << "\nEnter num1: ";
				cin >> n1;
				cout << "\nEnter num2: ";
				cin >> n2;
				cout << c.Sub(n1,n2);
				break;
				
			case 3:
				cout << "\nEnter num1: ";
				cin >> n1;
				cout << "\nEnter num2: ";
				cin >> n2;
				cout << c.mul(n1,n2);
				break;
				
			case 4:
				cout << "\nEnter num1: ";
				cin >> n1;
				cout << "\nEnter num2: ";
				cin >> n2;
				cout << c.div(n1,n2);
				break;
				
			case 5:
				exit;
		}
	}while(op != 5);
}
