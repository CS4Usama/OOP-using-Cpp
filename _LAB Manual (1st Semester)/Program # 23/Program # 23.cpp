/*Problem:-   Write a program to enter a letter and display the next two letters.*/


#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a Letter: ";
	cin>>ch;
	ch++;
	cout<<"\nThe Next Two Letters are:  "<<ch;
	ch++;
	cout<<" "<<ch;
	/*Another Method:
	cout<<"\nThe Next Two Letters are:  ";
	for(int c=1;c<=2;c++)
	{
		ch++;
		cout<<ch<<" ";
	}*/
	return 0;
}
