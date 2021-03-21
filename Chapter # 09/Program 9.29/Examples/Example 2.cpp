//Write a program that explains the concept of Default Parameter. It takes two different values in function call and then displays it's sum.

#include <iostream>
using namespace std;
void add(int a=5,int b=10);
int main()
{
	add();
	add(1,2);
	add(1);
	return 0;
}

void add(int a,int b)
{
	int c=a+b;
	cout<<"Sum of the Two Numbers is: "<<c<<endl;
}
