//Write a program that can create an exception of dividing by zero if A, B have the same values.


#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"Enter Values of A and B: ";
	cin>>a>>b;
	int x = a/(a-b);
	cout<<"The Result of a/(a-b) is: "<<x;
	return 0;
}
