/*Problem:-   Write a program that inputs radius of sphere form the user. Calculate its volume and
			  surface area using the formula Area=4(PI)R2 and volume =4/3(PI)R3 where (PI)=3.14 */


#include <iostream>
#include <iomanip>
#define PI 3.14
using namespace std;
int main()
{
	double rad, area, vol;
	cout<<"Enter Radius: ";
	cin>>rad;
	area=4*PI*rad*rad;
	cout<<fixed<<setprecision(2)<<"\nArea of the Sphere is: "<<area;
	vol=(4.0/3.0)*PI*rad*rad*rad;
	cout<<fixed<<setprecision(2)<<"\nVolume of the Sphere is: "<<vol;
	return 0;
}
