/*Problem:-   Write a program to display the following format using while loop.
--------------------------
A                        B
--------------------------
1                       5
2                       4
3                       3
4                       2
5                       1
--------------------------			*/


#include <iostream>
using namespace std;
int main()
{
	int a=1, b=5;
	cout<<"--------------------------"<<endl;
	cout<<"A\t\t\t B"<<endl;
	cout<<"--------------------------"<<endl;	
	while(a<=5 && b>=1) 
	{
		cout<<a<<"\t\t\t"<<b<<endl;
		a++;
		b--;
	}
	cout<<"--------------------------";
	return 0;
}
