#include <iostream>
using namespace std;
class Student
{
	private:
		int marks;
		char grade;
	public:
		Student(int m, char g)
		{
			marks=m;
			grade=g;
		}
		void show()
		{
			cout<<"Marks: "<<marks<<endl;
			cout<<"Grade: "<<grade<<endl;
		}
};

int main()
{
	Student s1(730, 'A'), s2(621, 'B');
	cout<<"Record of 1st Student:"<<endl;
	s1.show();
	cout<<"Record of 2nd Student:"<<endl;
	s2.show();
	return 0;
}
