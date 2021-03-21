#include <iostream>
using namespace std;
void show(int arr[])
{
	for(int i=0;i<5;i++)
		cout<<arr[i]<<"\t";
}

int main()
{
	int arr[5], i;
	cout<<"Enter Five Integers:\n";
	for(i=0;i<5;i++)
		cin>>arr[i];
	cout<<"The Values in Array are:\n";
	show(arr);
	return 0;
}
