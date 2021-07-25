#include <iostream>
using namespace std;

class Date
{
	private:
		int month;
		int day;
		int year;
	public:
		Date(int = 3, int = 14, int = 2006);
};

Date::Date(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
	cout << "Created a new data object with data values "
			<< month << ", " << day << ", " << year << endl;
}


int main()
{
	Date a;            // declare an object
	Date b;            // declare an object
	Date c(4,1,2002);  // declare an object
	
	return 0;
}

