#include <iostream>
using namespace std;
template <class Type>
class Test
{
	private:
		Type arr[5];
	public:
		void input()
		{
			for(int i=0; i<5; i++)
				cin>>arr[i];
		}
		void show()
		{
			int i;
			cout<<"Enter an Index: ";
			cin>>i;
			cout<<"The Value at Required Index: "<<arr[i]<<endl;
		}
};

int main()
{
	Test <int> a;
	Test <char> b;
	cout<<"Enter Five Integers: ";
	a.input();
	a.show();
	cout<<"\nEnter Five Characters: ";
	b.input();
	b.show();
	return 0;
}
