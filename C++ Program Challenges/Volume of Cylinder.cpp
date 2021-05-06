#include <iostream>
using namespace std;
int main()
{
	double rad, height;
	cout<<"Enter Radius of the Cylinder:  ";
	cin>>rad;
	cout<<"Enter Height of the Cylinder:  ";
	cin>>height;
	double vol = 3.14*rad*rad*height;
	cout<<"Volume of the Cylinder is:  "<<vol;
	return 0;
}
