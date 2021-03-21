#include <iostream>
using namespace std;
class Array
{
	private:
		int arr[5];
	public:
		Array()
		{
			for(int i=0; i<5; i++)
				arr[i] = -1;
		}
		void input()
		{
			for(int i=0; i<5; i++)
			{
				cout<<"Enter an Integer: ";
				cin>>arr[i];
			}
		}
		void show()
		{
			for(int i=0; i<5; i++)
				cout<<"\t"<<arr[i];
		}
		int operator==(Array a)
		{
			int eq=1;
			for(int i=0; i<5; i++)
				if(arr[i]!=a.arr[i])
					eq=0;
			return eq;
		}
};

int main()
{
	Array a,b;
	cout<<"\tEnter Values for 1st Array:"<<endl;
	a.input();
	cout<<"\tEnter Values for 2nd Array:"<<endl;
	b.input();
	cout<<"\n1st Array Values are:";
	a.show();
	cout<<"\n2nd Array Values are:";
	b.show();
	if(a==b)
		cout<<"\n\nBoth Arrays are Equal.";
	else
		cout<<"\n\nBoth Arrays are Different.";
	return 0;
}
