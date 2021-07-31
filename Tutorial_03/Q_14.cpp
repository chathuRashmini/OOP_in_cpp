#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string str_num = "12345";
	
	stringstream s_str_num(str_num);

	int num = 0;
	s_str_num >> num;

	cout << "Value numerical value of the string : " << num;

	return 0;
}

