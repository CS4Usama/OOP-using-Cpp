//Write a program that explains the concept of Argumented Macro Substitution.

#include <iostream>
#define MUL(a,b) (a*b)
using namespace std;
int main()
{
	int ans=MUL(2,3);
	cout<<"Answer is: "<<ans<<endl;
	int x=3,y=4;
	cout<<"Answer is: "<<MUL(x,y);
	return 0;
}
