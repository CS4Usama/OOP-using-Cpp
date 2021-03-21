//Program that explains the working & display of same name of Global & Local Variable. Also explain the working of Scope Resolution Operator ::

#include <iostream>
using namespace std;
int b=100;	//Gloabal Variable
int main()
{
	int b=200;	//Local Variable
	cout<<b<<endl<<::b;
	//Scope Resolution Operator :: helps variable to print its global value instead of local value.
	//Otherwise Function prints Local Variable Value by default.
	return 0;
}
