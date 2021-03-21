//Write a program that uses multiple throw and catch statements and then handles the exception.


#include <iostream>
using namespace std;
void fun(int a)
{
	try
	{
		if(a>0)
			throw a;
		else
			throw 'U';		//Error can be generated here by changing char to string value.
	}
	catch(int a)
	{
		cout<<"Caught an Integer: "<<a;
	}
	catch(char a)
	{
		cout<<"Caught a Character: "<<a;
	}
}

int main()
{
	int x;
	cout<<"\t*MULTI-CATCH EXCEPTION HANDLING*"<<endl<<endl;
	cout<<"Value is greater than Zero:\n";
	fun(10);
	cout<<endl<<"\nValue is less than Zero:\n";
	fun(-5);
	return 0;
}
