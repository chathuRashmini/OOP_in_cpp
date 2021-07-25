#include<iostream>
using namespace std;

class Vehicle
{
	public :
		Vehicle() {
			cout<< "In Vehicle constructor" << endl ;
		}
		void display() {
			cout<< "members of Vehicle\n" ;
		}
};
 
class HeavyVehicle : public Vehicle
{ 
	public:
		HeavyVehicle() {
			cout<< "In HeavyVehicle constructor" << endl;
		}
		
		void display() {
			cout<< "members of HeavyVehicle\n" ;
		}
};

class Bus : public HeavyVehicle
{
	public :
		Bus() {
			cout<<"In Bus constructor"<<endl;
		}
		
		void display() {
			cout<<"members of Bus\n";
		}
};

int main()
{
	Bus bus1, bus2;
	
	bus1.display();
	bus2.display();
}
