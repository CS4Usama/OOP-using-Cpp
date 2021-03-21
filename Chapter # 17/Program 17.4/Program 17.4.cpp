#include <iostream>
using namespace std;
template <class T>
class Test
{
	private:
		T arr[3];
	public:
		void input()
		{
			for(int i=0; i<3; i++)
				cin>>arr[i];
		}
		void output()
		{
			cout<<"The Values in the Array are as follows:"<<endl;
			for(int i=0; i<3; i++)
				cout<<arr[i]<<"\t";
			cout<<endl;
		}
};

int main()
{
	Test <int> x;
	Test <char> y;
	cout<<"Enter Three Integers:"<<endl;
	x.input();
	cout<<"Enter Three Characters:"<<endl;
	y.input();
	cout<<endl;
	x.output();
	y.output();
	return 0;
}
