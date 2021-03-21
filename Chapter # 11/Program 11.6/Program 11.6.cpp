#include <iostream>
using namespace std;
void exchange(int*,int*);
int main()
{
	int n1, n2;
	cout<<"Enter Two Integers: ";
	cin>>n1>>n2;
	cout<<endl<<"The Values Before Swapping:\n";
	cout<<"a = "<<n1<<"\t\t"<<"b = "<<n2<<endl;
	exchange(&n1, &n2);
	cout<<endl<<"The Values After Swapping:\n";
	cout<<"a = "<<n1<<"\t\t"<<"b = "<<n2;
	return 0;
}

void exchange(int *m, int *n)
{
	int temp;
	temp = *m;
	*m = *n;
	*n = temp;
}
