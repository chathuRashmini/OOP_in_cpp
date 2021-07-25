#include <iostream>
using namespace std;

class Number
{
	int num;
	
	public :
		Number() {
			num=1000;
		}
		
		Number(int x) {
			num=x;
		}
		
		int getnumber() {
			return(num);
		}
		
		int magic()
		{
			int i,j,k,m,x,y;
			for (i=1;i<=9;i++)
				for (j=0;j<=9;j++)
					for (k=0;k<=9;k++)
						for (m=0;m<=9;m++)
						{
							x=i*1000+j*100+k*10+m;
							y=m*1000+k*100+j*10+i;
							if (y==(x*9)) 
								return x;
						}
			return (0);
		}
};

int main()
{
	class Number n1,n2(1069),n3(1098);
	
	int x,y;
	
	y=n1.magic();
	cout << "Enter any number: " << endl;
	cin>>x;
	
	if (n1.getnumber()==y) 
		cout<<"Correct "<<n1.getnumber(); 
	else 
		cout<<"Wrong "<<n1.getnumber()<<endl;
	
	if (n2.getnumber()==y) 
		cout<<"Correct "<<n2.getnumber(); 
	else 
		cout<<"Wrong "<<n2.getnumber()<<endl;
	
	if (n3.getnumber()==y) 
		cout<<"Correct "<<n3.getnumber(); 
	else 
		cout<<"Wrong "<<n3.getnumber()<<endl;
	
	if (x==y) 
		cout<<"Correct "<<x; 
	else 
		cout<<"Wrong "<<endl;
	
	return (0);
} 
