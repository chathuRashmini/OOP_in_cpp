#include <iostream>
using namespace std;

class Employee
{
	private :
		static float tax_rate ;
		static int numemps ;
		int id_num ;
	
	public :
		Employee ( int = 0 ) ; 
		void display() ; 
};

float Employee::tax_rate = 0.0025 ;
int Employee::numemps = 0 ;

Employee::Employee(int num)
{
	id_num = num ;
	numemps++ ;
	tax_rate = tax_rate + 0.0025;
}

void Employee::display( )
{
	cout << "Employee number " << id_num << " has a tax rate of " << tax_rate << endl;
	cout << "There are currently " << numemps << " Employee objects\n" << endl ;
}

int main()
{
	Employee emp1(11122);
	emp1.display();
	
	Employee emp2(11133);
	emp2.display();
	
	Employee emp3(11144);
	emp3.display();	
	
	return 0;
}

