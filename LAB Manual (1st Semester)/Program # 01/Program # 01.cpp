/*Problem:-   Write a program that displays the sum of the following series using do-while loop
                1 + 1/4 + 1/8 ...... + 1/100 */


#include <iostream>
using namespace std;
int main()
{
	float a=1.0, b=4.0;
	do
	{
		a=a+1.0/b;
		b+=4;
	}
	while(b<=100);
	cout<<"Sum of the Series is: "<<a;
	return 0;
}
