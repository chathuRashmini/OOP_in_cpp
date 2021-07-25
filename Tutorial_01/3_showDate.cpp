#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
	private:
		int month;
		int day;
		int year;
	public:
		Date(int = 7, int = 4, int = 2001); 
		void showdate(); 
};

Date::Date(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
}

void Date::showdate()
{
	cout << setfill('0')  << setw(2) << month << '/'  	<< setw(2) << day << '/' << setw(2) << year ;
	cout << endl;
	
	return;
}

int main()
{
	Date a(4,1,1999), b(12,18,2001);
	
	cout << "\nThe date stored in a is originally ";
	a.showdate();
	
	cout << "\nThe date stored in b is ";
	b.showdate(); 
	
	a = b;         
	cout << "\nAfter assignment, the date stored in a is ";
	a.showdate();  
	
	return 0;
}

