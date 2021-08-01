#include <iostream>
using namespace std;

class Counter {
	int count;
	
	public:
		Counter() {
			count = 0;
		}
		Counter(int val) {
			count = val;
		}
		
		int increment(int val) {
			count += val;
		}
		
		int decrement(int val) {
			count -= val;
		}
		
		int reset(int val) {
			count = val;
		}
		
		void display() {
			cout << "The count is: " << count << endl;
		}
};

int main() {
	Counter c1, c2(10);
	
	c1.increment(20);
	c1.display();
	c1.decrement(10);
	c1.display();
	c1.reset(0);
	c1.display();
	
	c2.display();
	c2.increment(10);
	c2.display();
	c2.decrement(10);
	c2.display();
	c2.reset(30);
	c2.display();
	
	return 0;
}
