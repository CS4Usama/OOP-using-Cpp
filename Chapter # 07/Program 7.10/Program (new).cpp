#include <iostream>
using namespace std;
int main()
{
	int size, num, srch, i, count=0;
	cout<<"Enter Size of the Array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter "<<size<<" Number in Array: ";
	for(i=0;i<size;i++)
		cin>>arr[i];
	cout<<"\nEnter a Number to Search in the Array: ";
	cin>>srch;
	for(i=0;i<size;i++)
	{
		if(arr[i]==srch)
		{
			cout<<endl<<srch<<" is present at index: "<<i;
			count++;
		}
	}
	if(count==0)
		cout<<endl<<srch<<" is not present in the Array.";
	else
		cout<<endl<<endl<<srch<<" is present "<<count<<" times in the Array.";
	return 0;
}
