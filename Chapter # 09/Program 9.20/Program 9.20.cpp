#include <iostream>
using namespace std;
void sqr(int arr)
{
	cout<<arr<<"\t"<<arr*arr<<endl;
}

int main()
{
	int arr[5], i;
	cout<<"Enter Five Integers:\n";
	for(i=0;i<5;i++)
		cin>>arr[i];
	cout<<"\nCalling the Function\n";
	for(i=0;i<5;i++)
		sqr(arr[i]);
	return 0;
}
