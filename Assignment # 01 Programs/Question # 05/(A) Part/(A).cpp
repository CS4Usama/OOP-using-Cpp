/*Write a program containing a constructor and a destructor for an array.
Pass the data to the data construtor by reference.*/


#include <iostream>
using namespace std;
class IntegerArray
{
	public:
		static int data[2];
		
		/*Here in the above statement, Static Integer Array is declared with index 2.
		This Static Data Member is used to sharing the values to all objects without creating separate Variable Array for an individual object.
		This is declared in the public section because we need to access it outside the class.
		This will become a class Variable, not an object's Data Member.*/
		
		IntegerArray(int x)		//Parameterized Constructor
		{
			data[1]=x;
		}
		IntegerArray(const IntegerArray &b)		//Copy Constructor with Pass by Refernece Method to pass data
		{
			data[0]=b.data[0];
			data[1]=b.data[1];
		}
		~IntegerArray()		//Destructor
		{
			//Destructor Body
		}
};
int IntegerArray::data[2]={0,0};	//Initialization & Definition of Static Data Member (Integer Array)

int main()
{
	IntegerArray a(2);	//This call the Constructor
	a.data[0] = 4;
	a.data[1] = 2;
	if(true)
	{
		IntegerArray b = a;
		//(Copy Assignment Operator) Calling of Copy Constructor to copy the Array values of 'a' object to 'b' object
	}
	cout<<a.data[0]<<endl;	//The Result is 4
	return 0;
}


/* Explanation:
   ------------
   
Here in this program copy constructor pass the values to other object (b) by using pass by the reference method.
If the user makes any change in the object (a) then the values of the object (b) were also changed.

This program is solved by using "The Rule of Three".

The Rule of Three (also known as The Law of the Big Three or The Big Three) is a rule that claims that
if a class defines any of the following then it should probably explicitly define all three:

1.   Destructor
2.   Copy Constructor
3.   Copy Assignment Operator

The term "Rule of Three" was coined by Marshall Cline in 1991. */
