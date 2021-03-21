//Write a program that inputs two integers and then swap their values using Call by Address Method. It finally displays its swapped values.

#include <iostream>
using namespace std;
void swp(int*, int*);

int main()
{
	int a, b;
	cout<<"Enter 1st Integer: ";
	cin>>a;
	cout<<"Enter 2nd Integer: ";
	cin>>b;
	cout<<endl<<"Values Before Swapping:\n"<<"A = "<<a<<endl<<"B = "<<b<<endl;
	swp(&a,&b);
	cout<<endl<<"Values After Swapping:\n"<<"A = "<<a<<endl<<"B = "<<b;
	return 0;
}

void swp(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
