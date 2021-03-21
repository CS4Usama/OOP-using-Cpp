#include <iostream>
using namespace std;
int main()
{
	int arr1[5]={2,3,5,4,1}, arr2[5]={6,8,10,7,9}, arr3[5], i, j, k=0, temp;
	for(i=0;i<10;i++)
	{
		arr3[i]=arr1[i];
		if(i>4)
		{
			arr3[i]=arr2[k];
			k++;
		}
	}
	cout<<"Merged Elements of Two Arrays are:\n";
	for(i=0;i<10;i++)
		cout<<arr3[i]<<"   ";
	//Sorted Array:
	for(i=0;i<10-1;i++)
	{
		/*Here min Variable will store last Smallest value in it. But if we do not use it, then every next Small Value is arranged & stored
		and process takes more time than min varible execution.*/
		
										//int min=i;
		for(j=i+1;j<10;j++)
			if(arr3[j]<arr3[i])			//if(arr3[j]<arr3[min])
										//min=j;
										//if(min!=i)
				{
					temp=arr3[i];
					arr3[i]=arr3[j];	//arr3[i]=arr3[min];
					arr3[j]=temp;		//arr3[min]=temp;
				}
	}
	cout<<"\n\nSorted Array:\n";
	for(i=0;i<10;i++)
		cout<<arr3[i]<<"   ";
	return 0;
}
