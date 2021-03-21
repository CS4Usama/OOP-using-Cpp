#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

int main()
{
	int a,b;
	cout<<"Enter Two Integers:  ";
	cin>>a>>b;
	cout<<"Values Before Swapping:\n";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	swap(&a, &b);
	cout<<"Values After Swapping:\n";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	return 0;
}
