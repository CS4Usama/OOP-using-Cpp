#include <iostream>
using namespace std;
int main()
{
	float arr[5], *ptr;
	int i;
	cout<<"Enter Five Floating-Point Values\n";
	for(i=0;i<5;i++)
		cin>>arr[i];
	ptr=&arr[4];
	cout<<endl<<"The Values stored in Reverse Order is:\n";
	for(i=0;i<5;i++)
		cout<<*ptr--<<"\t";
	return 0;
}
