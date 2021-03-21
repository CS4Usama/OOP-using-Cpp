/*Write a program that explains the concept of returning objects from a friend member function. Program inputs the value of A and B in two objects and
display its sum in third object.*/

#include <iostream>
using namespace std;
class test
{
	private:
		int a, b;
	public:
		void get(int x, int y)
		{
			a=x;
			b=y;
		}
		friend test sum(test, test);
		void disp(test);
};

test sum(test t1, test t2)
{
	test t;
	t.a = t1.a + t2.a;
	t.b = t1.b + t2.b;
	return t;
}
void test::disp(test t)
{
	cout<<"Value of A: "<<t.a<<endl;
	cout<<"Value of B: "<<t.b<<endl;
}

int main()
{
	test A, B, C;
	A.get(10,20);
	B.get(30,40);
	C=sum(A,B);
	cout<<"1st Object Values:"<<endl;
	A.disp(A);
	cout<<endl<<"2nd Object Values:"<<endl;
	B.disp(B);
	cout<<endl<<"3rd Object Values (Sum of Above Both Objects):"<<endl;
	C.disp(C);
	return 0;
}
