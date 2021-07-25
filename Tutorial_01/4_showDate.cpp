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
		Date(const Date&);
		void showdate();
};

Date::Date(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
}

Date::Date(const Date& olddate)
{
	month = olddate.month;
	day = olddate.day;
	year = olddate.year;
}

void Date::showdate()
{
	cout << setfill('0') << setw(2) << month << '/' << setw(2) << day << '/' << setw(2) << year ;
	cout << endl;
	
	return;
}


int main()
{
	Date a(4,1,1999), b(12,18,2002);
	Date d = b;  // use the copy constructor
	Date c;
	
	cout << "\nThe date stored in a is ";
	a.showdate();
	
	cout << "\nThe date stored in b is ";
	b.showdate();
	
	cout << "\nThe DEFAULT date stored in c is ";
	c.showdate();
	
	cout << "\nThe date COPIED to d is ";
	d.showdate();
	
	return 0;
}

