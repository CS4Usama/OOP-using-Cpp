/*Problem:-   Write a program that accepts the code number as an input and display the correct disk drive manufacture as follows:
			  Code			Disk Drive Manufacture
			   1 			 Western Digital
			   2 			 3M Corporation
			   3 			 Maxell Corporation
			   4 			 Sony Corporation
			   5 			 Verbatim Corporation		*/
			  

#include <iostream>
using namespace std;
int main()
{
	char n;
	cout<<"Enter Code Number (from 1 to 5): ";
	cin>>n;
	switch(n)
	{
		case'1':
			cout<<endl<<"Associated Disk Drive Manufacture with entered Code is:"<<endl;
			cout<<"\tWestern Digital";
			break;
		case'2':
			cout<<endl<<"Associated Disk Drive Manufacture with entered Code is:"<<endl;
			cout<<"\t3M Corporation";
			break;
		case'3':
			cout<<endl<<"Associated Disk Drive Manufacture with entered Code is:"<<endl;
			cout<<"\tMaxell Corporation";
			break;
		case'4':
			cout<<endl<<"Associated Disk Drive Manufacture with entered Code is:"<<endl;
			cout<<"\tSony Corporation";
			break;
		case'5':
			cout<<endl<<"Associated Disk Drive Manufacture with entered Code is:"<<endl;
			cout<<"\tVerbatim Corporation";
			break;
		default:
			cout<<endl<<"Invalid Input";
	}
	return 0;
}
