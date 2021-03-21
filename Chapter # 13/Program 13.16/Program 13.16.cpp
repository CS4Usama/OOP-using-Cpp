#include <iostream>
#include <stdio.h>
using namespace std;
class Student
{
	private:
		static int r;
		int rno, marks;
		char name[50];
	public:
		Student()
		{
			r++;
			rno=r;
		}
		void get()
		{
			/*cin Object store carriage return/enter key at the end of every string input. So that it will skip input from string.
			To input data properly in it, we need to write some functions. There are two functions which will flush the buffer stream from unread and unwanted data:
			One is to write:  cin.clear(); cin.sync();
			And the Second is:  cin.ignore(); */
			
			cin.clear();	//It will clears the error flag on cin (so that the future I/O operations will work correctly).
			cin.sync();		//It will discards all unread characters from the input buffer.
			cout<<"Enter Name: ";
			gets(name);
			cout<<"Enter Marks: ";
			cin>>marks;
			
			//Another Method to clear buffer stream:
			/* cin.ignore(); */		//It will clears/ignore buffer stream or Enter Key/Carriage Return at the end of cin object. In simple words, it will flush the buffer stream.
		}
		void show()
		{
			cout<<endl<<"Roll No: "<<rno<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
};
int Student::r = 0;

int main()
{
	Student s1, s2, s3;
	s1.get();
	s2.get();
	s3.get();
	s1.show();
	s2.show();
	s3.show();
	return 0;
}
