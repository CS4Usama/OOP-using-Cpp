/* Write a program that handles the exception of any number divided by zero.
(Exception Handling of Division by Zero) */


#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"Enter Values of A and B: ";
	cin>>a>>b;
	int x = a-b;
	try
	{
		if(x!=0)
			cout<<"The Result of a/(a-b) is: "<<a/x;
		else
			throw(x);	//throw x;
	}
	catch(int x)
	{
		cout<<"Dvision by Zero.";
	}
	return 0;
}
