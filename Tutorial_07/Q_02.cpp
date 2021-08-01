#include<iostream>
using namespace std;

class Stack {
	char arr[27];
	int index;
	
	public:
		Stack();
	
		void load_stack();
		void show_stack();
		char pop();
		void push(char ch);
		
		~Stack() {
			cout << "Destructor executed" << endl;
		}
};

Stack::Stack() {
	index = 0;
}

void Stack::load_stack() {
	char l;
	int i=0;
	
	for(l='a'; l<='z'; l++) {
		arr[i++] = l;
	}
	arr[i]='\0';
	index = i--;
}

void Stack::show_stack() {
	int i;
	for (i=0; i<index; i++) {
		cout << arr[i] << " " ;
	}
	cout << endl;
}

void Stack::push(char ch) {
	if (index == 27) {
		cout << "Stack overflow!";
		return;
	}
	else {
		arr[index] = ch;
		index++;
	}
}

char Stack::pop() {
	if (index == 0) {
		cout << "Stack underflow!";
		return 0;
	}
	else {
		index--;
		return arr[index];
	}
}

int main() {
	Stack st;
	
	st.load_stack();
	st.show_stack();
	st.pop();
	st.push('@');
	st.show_stack();
	
	return 0;
}
