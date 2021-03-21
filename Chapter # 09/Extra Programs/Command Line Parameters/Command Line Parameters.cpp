//Write a program that explains the working of Command line Parameters.

#include <iostream>
using namespace std;
int main(int n, char *a[])
{
	cout<<"\nYou Provided the Following Parameters:\n\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	/*We will run this program through cmd in which location it is saved, then we will simply get an output through cmd.*/
	return 0;
}
