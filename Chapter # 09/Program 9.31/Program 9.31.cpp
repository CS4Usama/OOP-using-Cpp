#include <iostream>
using namespace std;
int sum(int a[])
{
	int s;
	for(int i=0;i<10;i++)
		s+=a[i];
	return s;
}

int sum(int a[],char ch)
{
	int s=0,se=0,so=0;
		switch(ch)
		{
			case'E':
			case'e':
				for(int i=0;i<10;i++)
				{
					if(a[i]%2==0)
						se+=a[i];
				}
				s=se;
				break;
			case'O':
			case'o':
				for(int i=0;i<10;i++)
				{
					if(a[i]%2!=0)
						so+=a[i];
				}
				s=so;
				break;
			default:
				s=0;
		}
	return s;
}

int main()
{
	int a[10];
	cout<<"Enter 10 Integers: ";
	for(int i=0;i<10;i++)
		cin>>a[i];
	int s=sum(a);
	cout<<"\nSum of All Integers is: "<<s<<endl;
	s=sum(a,'E');
	cout<<"Sum of All Even Integers is: "<<s<<endl;
	s=sum(a,'O');
	cout<<"Sum of All Odd Integers is: "<<s<<endl;
	s=sum(a,'X');
	cout<<"No Sum for Wrong Choice. The Result is: "<<s<<endl;
	return 0;
}
