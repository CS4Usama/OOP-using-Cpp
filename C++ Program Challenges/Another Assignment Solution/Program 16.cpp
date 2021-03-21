#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	switch(num % 2)
	{
		case 0:
			cout<<num<<" is an Even Number.";
			break;
		case 1:
			cout<<num<<" is an Odd Number.";
			break;
	}
	return 0;
}
