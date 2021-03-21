//Write a program that explains the concept of malloc() function. Program takes array index input from the user and displays the sum of all the elements of the array.

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int sum=0, in, *p, *ptr;
	cout<<"Enter Size of Array: ";
	cin>>in;
	ptr = (int*)malloc(in*sizeof(int));
	if(ptr==NULL)
	{
		cout<<"\nError: Out of Memory."<<endl;
		exit(0);
	}
	p = ptr;
	cout<<"\nEnter Elements in the Array: ";
	for(int i=0; i<in; i++)
	{
		cin>>*ptr;
		sum = sum + *ptr;
		ptr++;
	}
	cout<<"\nElements of Array are: ";
	for(int i=0; i<in; i++)
	{
		cout<<*p<<"\t";
		p++;
	}
	cout<<"\n\nSum of All the Array Elements is: "<<sum;
	free(ptr);
	return 0;
}
