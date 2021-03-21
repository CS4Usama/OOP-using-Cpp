//Write a program that explains the concept of Rethrowing an exception using the Nesting concept.


#include <iostream>
using namespace std;
int main()
{
	float a, b;
	try
	{
		cout<<"Enter the Values of A and B: ";
		cin>>a>>b;
		try
		{
			if(a==0 || b==0)
			{
				if(a==0)
					throw a;
				else
					throw b;
			}
			else
				cout<<"Division: "<<a/b<<endl;
		}
		catch(float z)
		{
			cout<<endl<<"Caught Integer inside User-defined Function: "<<z<<endl;
			throw;
		}
		cout<<endl<<"End of User-defined Function."<<endl;
	}
	
	catch(float z)
	{
		cout<<"Caught Integer inside Main Function: "<<z<<endl;
	}
	cout<<endl<<"End of Main Function.";
	return 0;
}
