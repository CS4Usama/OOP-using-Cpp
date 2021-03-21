//Write a program that explains the concept of realloc() function. Program takes array index input from the user and displays the sum of all the elements of the array. Then, reallocate memory using realloc(), again takes input and display sum.

#include <iostream>
#include <stdlib.h>
using namespace std;

void fun(int *ptr, int in)
{
	int sum=0, *p;
	if(ptr==NULL)
	{
		cout<<"\nError: Out of Memory."<<endl;
		exit(0);
	}
	p = ptr;
	cout<<"\nEnter "<<in<<" Elements in the Array: ";
	for(int i=1; i<=in; i++)
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
}

int main()
{
	int *ptr, in;
	ptr = (int*)malloc(in*sizeof(int));
	cout<<"Enter Size of Array: ";
	cin>>in;
	fun(ptr,in);
	cout<<endl<<endl<<endl;
	cout<<"Enter Size of Array: ";
	cin>>in;
	ptr = (int*)realloc(ptr, in*sizeof(int));
	fun(ptr,in);
	return 0;
}
