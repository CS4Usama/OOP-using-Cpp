/*Write a program that declares a class with two private data members and a public function that adds both values.
(Encapsulation)*/


#include <iostream>
using namespace std;
class Test
{
	private:
		float a, b;
	public:
		void input()
		{
			cout<<"Enter Value of A: ";
			cin>>a;
			cout<<"Enter Value of B: ";
			cin>>b;
		}
		void sum()
		{
			cout<<endl<<"Sum of "<<a<<" and "<<b<<" is:  "<<a+b;
		}
};

int main()
{
	Test obj;
	cout<<"\tExample of Encapsulation\n"<<endl;
	obj.input();
	obj.sum();
	return 0;
}
