/*Problem:-   Write a program to print the following sequence:
			  1 3 9 27 81 ...... 200 */


#include <iostream>
using namespace std;
int main()
{
	int num;
	for(num=1;num<=200;num*=3)
	{
		cout<<num<<"\t";
	}
	return 0;
}
