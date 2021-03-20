/*Problem:-   Write a program to calculate the volume (V) of a cube by taking measures from the user.
			  (Formula: V = length * width * height)		*/


#include <iostream>
using namespace std;
int main()
{
	double len, wid, hgh, vol;
	cout<<"Enter Length of the Cube: ";
	cin>>len;
	cout<<"Enter Width of the Cube: ";
	cin>>wid;
	cout<<"Enter Height of the Cube: ";
	cin>>hgh;
	vol=len*wid*hgh;
	cout<<endl<<"Volume of the Cube is: "<<vol;
	return 0;
}
