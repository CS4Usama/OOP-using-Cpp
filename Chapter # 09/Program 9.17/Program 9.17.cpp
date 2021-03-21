#include <iostream>
using namespace std;
int b=100;
void fun()
{
	static int a=0;
	a++;
	cout<<"The Value of 'a' is: "<<a<<endl;
}

int main()
{
	for(int i=1;i<=5;i++)
		fun();
	return 0;
}
