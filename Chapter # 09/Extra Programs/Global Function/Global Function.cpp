//Write a program that explains the working of Global Function.

#include <iostream>
using namespace std;
void show();	//Here Function is declared Globally not inside any other function.
int main()
{
	show();
	return 0;
}
void show()
{
	cout<<"Programming makes Life Interesting.";
}
