/*Problem:-   Write a program that inputs obtained marks of a student, calculate the percentage
			  (assuming total marks are 1100) and displays grade according to the following rules:
			  Percentage							Grade
			  More than or equal to 80			 	 A+
			  Between 70 (inclusive) and 80			 A
			  Between 60 (inclusive) and 70 	 	 B
			  Between 50 (inclusive) and 60 	 	 C
			  Between 40 (inclusive) and 50 	 	 D
			  Between 33 (inclusive) and 40 	 	 E
			  Less than 33 						 	 F		*/
			  

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float marks, per;
	cout<<"Enter Obtained Marks: ";
	cin>>marks;
	per=marks/1100*100;
	cout<<endl<<fixed<<setprecision(2)<<"Your Percentage is: "<<per<<endl;
	if(per>=80)
		cout<<"Your Grade is: A+";
	else if(per>=70)
		cout<<"Your Grade is: A";
	else if(per>=60)
		cout<<"Your Grade is: B";
	else if(per>=50)
		cout<<"Your Grade is: C";
	else if(per>=40)
		cout<<"Your Grade is: D";
	else if(per>=33)
		cout<<"Your Grade is: E";
	else
		cout<<"Your Grade is: F";
	return 0;
}
