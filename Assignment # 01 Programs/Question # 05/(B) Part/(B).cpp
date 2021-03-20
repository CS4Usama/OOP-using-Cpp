//Write a class having two private variables and one member function which will return the area of the rectangle.


#include <iostream>
#include <iomanip>
using namespace std;
class Rectangle
{
	private:
		double len, wid;
	public:
		double fun(double len, double wid)
		{
			double area = len * wid;
			return area;
		}
};

int main()
{
	Rectangle rect;
	double l, w;
	cout<<"Enter Length and Width of the Rectangle:  ";
	cin>>l>>w;
	cout<<fixed<<setprecision(3);
	cout<<"\nArea of the Rectangle is: "<<rect.fun(l,w);
	return 0;
}
