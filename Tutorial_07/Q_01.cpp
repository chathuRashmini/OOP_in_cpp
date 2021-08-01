#include <iostream>
using namespace std;

class Counter {
	int count;
	
	public:
		Counter() {
			count = 0;
		}
		
		void increment() {
			count++;
		}
		
		void decrement() {
			count--;
		}
		
		void reset() {
			count = 0;
		}
		
		void display() {
			cout << "Count: " << count << endl;
		}
};

int main() {
	
	Counter c1;
	
	c1.increment();
	c1.display();
	
	c1.decrement();
	c1.display();
	
	c1.reset();
	c1.display();
	
	return (0);
}
