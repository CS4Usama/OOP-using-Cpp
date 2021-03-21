#include <iostream>
using namespace std;
void swap(int*, int*);

int main()
{
	int a, b, *p, *q;
	p = &a;
	q = &b;
	cout<<"Enter Two Integers:  ";
	cin>>*p>>*q;
	cout<<"Values Before Swapping:\n";
	cout<<"a = "<<*p<<endl;
	cout<<"b = "<<*q<<endl;
	swap(p, q);
	cout<<"Values After Swapping:\n";
	cout<<"a = "<<*p<<endl;
	cout<<"b = "<<*q<<endl;
	return 0;
}

void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
