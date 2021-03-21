#include <iostream>
using namespace std;
char grd(int n)
{
	if(n>80)
		return 'A';
	else if(n>60)
		return 'B';
	else if(n>40)
		return 'C';
	else
		return 'F';
}

int main()
{
	int n;
	cout<<"Enter Number Obtained: ";
	cin>>n;
	
	//Another Method:
	/*	char d=grd(n);
		cout<<"Your Grade is: "<<d;	*/
	
	cout<<"Your Grade is: "<<grd(n);	
	return 0;
}
