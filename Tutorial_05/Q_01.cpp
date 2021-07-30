#include <iostream>
using namespace std;

class Calculator{
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
	char op;
	Calculator c;
	
	cout << "\nEnter num1 operator num2 (Ex: 2 + 3): ";
	cin >> n1 >> op >> n2;
	
	if(op == '+'){
		cout << "Answer = " << c.Add(n1,n2) << endl;
	}
	else if(op == '-'){
		cout << "Answer = " << c.Sub(n1,n2) << endl;
	}
	else if(op == '*'){
		cout << "Answer = " << c.mul(n1,n2) << endl;
	}
	else if(op == '/'){
		cout << "Answer = " << c.div(n1,n2) << endl;
	}
	else{
		cout << "\nERROR!" << endl;
	}
}
