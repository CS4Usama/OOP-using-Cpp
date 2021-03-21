#include <iostream>
using namespace std;
class Parent
{
	protected:
		int n;
	public:
		Parent()
		{
			n=0;
		}
		Parent(int p)
		{
			n=p;
		}
		void show()
		{
			cout<<"n = "<<n<<endl;
		}
};

class Child : public Parent
{
	private:
		char ch;
	public:
		Child() : Parent()
		{
			ch = 'U';
		}
		Child(char c, int p) : Parent(p)
		{
			ch = c;
		}
		void display()
		{
			cout<<"ch = "<<ch<<endl;
		}
};

int main()
{
	Child obj1, obj2('#',137);
	cout<<"Object1 is as Follows:"<<endl;
	obj1.show();
	obj1.display();
	cout<<endl<<"Object2 is as Follows:"<<endl;
	obj2.show();
	obj2.display();
	return 0;
}
