#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	unsigned long sal_A=125000, sal_B=80000, sal_C=45000, t_am;
	int tax_deduct, net_A, net_B, net_C;
	net_A=net_B=net_C=0;
	
	/* Here Sal_A variable is for Level-A Employee Salary and so on...
	net_A variable is for individually employee-A tax of a month and so on...
	t_am variable is the Total Amount paid by University */
	
	if((sal_A*12) > 600000)
		net_A = sal_A*0.01;
	if((sal_B*12) > 600000)
		net_B = sal_B*0.01;
	if((sal_C*12) > 600000)
		net_C = sal_C*0.01;
	
	sal_A = sal_A-net_A-600;
	sal_B = sal_B-net_B-600;
	sal_C = sal_C-net_C-600;
	
	tax_deduct = 2*net_A + 3*net_B + 5*net_C;
	t_am = 2*sal_A + 3*sal_B + 5*sal_C;
	
	cout<<"Total Monthly Tax deduction of All Employees :  "<<tax_deduct<<endl;
	cout<<" Total amount of Welfare Fund collected :\t"<<600*10<<endl;
	cout<<" Net Monthly Salary of A-Level Employee :\t"<<sal_A<<endl;
	cout<<" Net Monthly Salary of B-Level Employee :\t"<<sal_B<<endl;
	cout<<" Net Monthly Salary of C-Level Employee :\t"<<sal_C<<endl;
	cout<<" Total amount paid by University after a month :\t"<<t_am<<endl;
	
	cout<<"\nEnter 1 to know the tax collection of Level-A employees"<<endl;
	cout<<"Enter 2 to know the tax collection of Level-A employees"<<endl;
	cout<<"Enter 3 to know the tax collection of Level-A employees"<<endl;
	
	int choice = getche();
	if(choice=='1')
		cout<<"\nTax Collection of Level-A Employees is Rs."<<net_A*2<<endl;
	else if(choice=='2')
		cout<<"\nTax Collection of Level-B Employees is Rs."<<net_B*3<<endl;
	else if(choice=='3')
		cout<<"\nTax Collection of Level-C Employees is Rs."<<net_C*5<<endl;
	else
		cout<<"\nIncorrect Input"<<endl;
	
	getch();
	return 0;
}
