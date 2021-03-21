//Write a program that explains the working of Local Function.

#include <iostream>
using namespace std;
int main()
{
	void show();	//Here Function is declared Locally inside main function.
	show();
	return 0;
}
void show()
{
	cout<<"Programming makes Life Interesting.";
}
