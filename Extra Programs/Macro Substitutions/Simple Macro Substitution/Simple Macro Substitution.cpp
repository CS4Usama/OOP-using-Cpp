//Write a program that explains the concept of Simple Macro Substitution.

#include <iostream>
using namespace std;
#define VALUE 1000
#define MSG "Cyber Hawk"
int main()
{
	int a=200;
	if(VALUE>a)
		cout<<MSG;
	return 0;
}
