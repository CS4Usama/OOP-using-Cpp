/*Problem:-   Senior salesperson is paid Rs.400 a week, and a junior salesperson is paid Rs.27 (275) a week.
			  Write a program that accepts as input a salesperson's status in the character variable status.
			  If status is 's' or 'S', the senior's person salary should be displayed; if status is 'j' or 'J',
			  the junior salesperson's salary should be displayed, otherwise display error message.*/


#include <iostream>
using namespace std;
int main()
{
	char ch;
	int sal;
	cout<<"Enter Salesperson's Status ('s' or 'S' for Senior Salesperson and 'j' or 'J' for Junior Salesperson): ";
	cin>>ch;
	if(ch=='s' || ch=='S')
	{
		sal=4*400;
		cout<<"\nSenior Salesperson's Salary is: "<<sal;
	}
	else if(ch=='j' || ch=='J')
	{
		sal=4*27;
		cout<<"\nJunior Salesperson's Salary is: "<<sal;
	}
	else
		cout<<"\nInvalid Input";
	return 0;
}
