//Write a program that explains the concept of calloc() function. Program takes array index input from the user and displays the sum of all the elements of the array.

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int sum=0, in, *p, *ptr;
	cout<<"Number of Elements to be Entered: ";
	cin>>in;
	ptr = (int*)calloc(in, sizeof(int));
	if(ptr==NULL)
	{
		cout<<"\nError: Out of Memory."<<endl;
		exit(0);
	}
	p = ptr;
	cout<<"\nEnter "<<in<<" Elements in the Array: ";
	for(int i=0; i<in; i++)
	{
		cin>>*ptr;
		sum+= *ptr;
		ptr++;
	}
	cout<<"\nElements of Array are: ";
	for(int i=0; i<in; i++)
	{
		cout<<*p<<"\t";
		p++;
	}
	cout<<"\n\nAddition of All the Array Elements is: "<<sum;
	free(ptr);
	return 0;
}
