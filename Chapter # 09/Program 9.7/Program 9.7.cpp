#include <iostream>
using namespace std;
void cal(long a, long b, char op)
{
	switch(op)
	{
		case'+':
			cout<<a<<" "<<op<<" "<<b<<" = "<<a+b;
			break;
		case'-':
			cout<<a<<" "<<op<<" "<<b<<" = "<<a-b;
			break;
		case'*':
			cout<<a<<" "<<op<<" "<<b<<" = "<<a*b;
			break;
		case'/':
			cout<<a<<" "<<op<<" "<<b<<" = "<<a/b;
			break;
		default:
			cout<<"Invalid Operator.";
	}
}

int main()
{
	long a, b;
	char op;
	cout<<"Enter 1st Number, Operator and 2nd Number: ";
	cin>>a>>op>>b;
	cal(a,b,op);
	return 0;
}
