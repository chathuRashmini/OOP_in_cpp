#include <iostream>
using namespace std;

int main(){
	char grZero[5] = {'A', 'E', 'I', 'O', 'U'};
	char grOne[5] = {'B', 'D', 'Q', 'P', 'R'};
	char grTwo[3] = {'C', 'S', 'G'};
	char a;
	int i;
	
	cout << "\nEnter the letter: ";
	cin >> a;
	
	do{
		switch(a) {
			case 1:
				for(i=0; i<5; i++){
					if(a==grZero[i]){
						cout << "\nBelongs to group 0"<<endl;
					}
				}
				break;
				
			case 2:
				for(i=0; i<5; i++){
					if(a==grOne[i]){
						cout << "\nBelongs to group 1"<<endl;
					}
				}
				break;
				
			case 3:
				for(i=0; i<5; i++){
					if(a==grTwo[i]){
						cout << "\nBelongs to group 2"<<endl;
					}
				}	
				break;
				
			case 4:
				cout << "\nInvalid letter for all the other inputs"<<endl;
				exit;
		}
	}while(a);
}
