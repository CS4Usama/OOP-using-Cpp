#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<<"Enter Two Numbers (Space Separated): ";
	cin>>num1>>num2;
	switch(num1 > num2)
	{
		case 0:
			cout<<num2<<" is the Maximum Number.";
			break;
		case 1:
			cout<<num1<<" is the Maximum Number.";
			break;
	}
	return 0;
}
