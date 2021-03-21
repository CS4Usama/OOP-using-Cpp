#include <iostream>
using namespace std;
int a;
void fun()
{
	a=a*2;
}

int main()
{
	cout<<"Enter a Number: ";
	cin>>a;
	cout<<"Value of 'a' before Function Call: "<<a<<endl;
	fun();
	cout<<"Value of 'a' before Function Call: "<<a;
	return 0;
}
