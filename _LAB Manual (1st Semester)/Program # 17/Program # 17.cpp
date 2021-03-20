/*Problem:-   Write a program that inputs age in years and display age in days and months.*/


#include <iostream>
using namespace std;
int main()
{
	long yrs, days, mon;
	cout<<"Enter your Age in Years: ";
	cin>>yrs;
	days=yrs*365;
	cout<<"\nYour Age in Days: "<<days<<endl;
	mon=yrs*12;
	cout<<"Your Age in Months: "<<mon;
	return 0;
}
