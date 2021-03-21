#include <iostream>
using namespace std;
class Person
{
	private:
		char n[20];
	public:
		void get()
		{
			cout<<"Enter Your Name: ";
			gets(n);
		}
		void show()
		{
			cout<<"Your Name is: "<<n<<endl;
		}
};

int main()
{
	Person *ptr[5];
	for(int i=0; i<5; i++)
	{
		ptr[i] = new Person;
		ptr[i] -> get();
	}
	for(int i=0; i<5; i++)
		ptr[i] -> show();
	return 0;
}
