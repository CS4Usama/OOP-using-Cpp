#include <iostream>
#include <string.h>
using namespace std;
class Player
{
	private:
		char nam[30];
		float avg;
		char team[30];
	public:
		Player()
		{
			cout<<"Enter Player Name: ";
			gets(nam);
			cout<<"Enter Average: ";
			cin>>avg;
			cin.clear();
			cin.sync();
			cout<<"Enter Team Name: ";
			gets(team);
		}
		void input()
		{
			cout<<"Enter Player Name: ";
			gets(nam);
			cout<<"Enter Average: ";
			cin>>avg;
			cout<<"Enter Team Name: ";
			gets(team);
		}
		void display()
		{
			cout<<"Player Name: "<<nam<<endl;
			cout<<"Average: "<<avg<<endl;
			cout<<"Team Name: "<<team<<endl;
		}
		void change(char n[], float a, char t[])
		{
			strcpy(nam,n);
			avg=a;
			strcpy(team,t);
		}
}p1;

int main()
{
	cout<<endl;
	p1.display();
	cout<<endl<<"\tAfter change() Function:"<<endl;
	p1.change("Usama", 87.88, "Pakistan");
	p1.display();
	return 0;
}
