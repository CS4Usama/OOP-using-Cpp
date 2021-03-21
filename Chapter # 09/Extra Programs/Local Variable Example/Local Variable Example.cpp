//Write a Program that explains the Scope and Lifetime of a Local Variable.

#include <iostream>
using namespace std;
void fun();
int main()
{
	for(int i=1;i<=5;i++)
		fun();
	return 0;
}

void fun()
{
	auto int n=0;
	n++;
	cout<<"The Value of n is: "<<n<<endl;
}
