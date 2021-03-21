#include <iostream>
using namespace std;
int main()
{
	int arr[7], *p1, *p2;
	for(int i=0;i<7;i++)
	{
		cout<<"Enter an Integer: ";
		cin>>arr[i];
	}
	cout<<"\n\t*__UNSORTED ARRAY__*"<<endl<<endl;
	cout<<"The Original Values in the Array:";
	for(int i=0;i<7;i++)
		cout<<"\t"<<arr[i];
	p1=arr;
	for(int i=0;i<6;i++,p1++)
	{
		p2=p1+1;


		for(int j=i+1;j<7;j++,p2++)
		{
			if(*p1 < *p2)
			{
				int tmp = *p1;
				*p1 = *p2;
				*p2 = tmp;
			}
		}
	}
	cout<<"\n\n\t*__SORTED ARRAY__*"<<endl<<endl;
	for(int i=0;i<7;i++)
		cout<<arr[i]<<"\t";
	return 0;
}
