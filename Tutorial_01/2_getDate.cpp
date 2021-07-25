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
		Date(int = 3, int = 14, int = 2006);  // constructor with defaults
		Date(long);	                           // another constructor
		void showdate();                      // member function to display a date
};

Date::Date(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
}

Date::Date(long yyyymmdd)
{
	year = int(yyyymmdd/10000.0);                            // extract the year
	month = int( (yyyymmdd - year * 10000.0)/100.00 );       // extract the month
	day = int(yyyymmdd - year * 10000.0 - month * 100.0);    // extract the day
}


void Date::showdate()
{
	cout << "The date is " 
		<< setfill('0')
		<< setw(2) << month << '/' 
		<< setw(2) << day << '/'
		<< setw(2) << year;
  	cout << endl;
 
  	return;
}

	
int main()
{
	Date a, b(4,1,1998), c(20020515L); // declare three objects
	
	a.showdate();         // display object a's values
	b.showdate();         // display object b's values
	c.showdate();         // display object c's values
	
	return 0;
}

