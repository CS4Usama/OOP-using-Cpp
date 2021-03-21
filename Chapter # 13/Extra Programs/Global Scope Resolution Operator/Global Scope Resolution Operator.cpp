//Write a program that explains the use of Global Scope Resolution Operator :: to display the values of same name of local and global variable.


#include<iostream>
using namespace std;
int a=100;
int main()
{
	int a=500;
	
	/*As We can see, here local and global both variables are declared with same names. If we simply display the value of a then it will display
	Local Variable's Value. If we want to display Global Variable's Value then we have to use Global Scope Resolution Operator :: with Variable name in cout*/
	
	cout<<"LOCAL VARIABLE VALUE:"<<endl;
	cout<<"Value of Variable a is: "<<a<<endl;
	cout<<endl<<"GLOBAL VARIABLE VALUE:"<<endl;
	cout<<"Value of Variable a is: "<<::a;
	return 0;
}
