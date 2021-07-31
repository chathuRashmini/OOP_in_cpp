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
		void setdate(int, int, int);  
		void showdate();
};

Date::Date(int mm, int dd, int yyyy)
{
	this->month = mm;
	this->day = dd;
	this->year = yyyy;
}

void Date::setdate(int mm, int dd, int yyyy)
{
	this->month = mm;
	this->day = dd;
	this->year = yyyy;
}

void Date::showdate()
{
	cout << "The date is ";
	cout << setfill('0') << setw(2) << this->month << '/'  << setw(2) << this->day << '/'  << setw(2) << this->year << endl;
}

int main()
{
	Date a(4,1,1999) , b(12,18,2001);
	
	b.setdate(12,25,2002);
	cout << endl;
	
	a.showdate();
	b.showdate();
	
	return 0;
}

