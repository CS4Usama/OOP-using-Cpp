//Write a program that explains the concept of Nested Macro Substitution.

#include <iostream>
#define SQUARE(x) ((x)*(x))
#define CUBE(x) (SQUARE(x)*(x))
using namespace std;
int main()
{
	cout<<"Answer is: "<<CUBE(2);
	#undef CUBE
	return 0;
}
