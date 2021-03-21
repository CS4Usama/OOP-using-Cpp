#include <iostream>
using namespace std;
int main()
{
	int arr[20], size, i, j, tmp;
	cout<<"Enter Size of the Array: ";
	cin>>size;
	cout<<"Enter "<<size<<" Elements in the Array:\n";
	for(i=0;i<size;i++)
		cin>>arr[i];
	for(i=1;i<size;i++)
	{
		tmp=arr[i];
		for(j=i-1;j>=0 && arr[j]>tmp;j--)
			arr[j+1]=arr[j];
		arr[j+1]=tmp;
	}
	cout<<"\nThe Array after Insertion Sort is:\n";
	for(i=0;i<size;i++)
		cout<<arr[i]<<"  ";
	return 0;
}
