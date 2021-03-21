#include <iostream>
using namespace std;
int even(int arr[])
{
	int n, i;
	for(i=0;i<5;i++)
		if(arr[i]%2==0)
			n++;
	return n;
}

int main()
{
	int arr[5], i, c;
	cout<<"Enter Five Integers:\n";
	for(i=0;i<5;i++)
		cin>>arr[i];
	c=even(arr);
	cout<<"The Array contains "<<c<<" Even Numbers.";
	return 0;
}
