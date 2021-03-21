#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
struct rec
{
	char n[20];
	int r, i, t;
	float avg;
} rec[5];

void line()
{
	for(int i=1;i<42;i++)
		cout<<"--";
	cout<<endl;
}

void star()
{
	for(int i=1;i<42;i++)
		cout<<"**";
	cout<<endl;
}

int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter Player's Name: ";
		cin>>rec[i].n;
		cout<<"Enter Number of Runs: ";
		cin>>rec[i].r;
		cout<<"Enter Number of Innings: ";
		cin>>rec[i].i;
		cout<<"Enter Times Not Out: ";
		cin>>rec[i].t;
		cout<<endl;
		rec[i].avg=float(rec[i].r)/rec[i].i;
	}
	system("cls");
	cout<<setw(49)<<"CRICKETER'S TABLE\n";
	line();
	cout<<setw(15)<<"Player's Name"<<setw(15)<<"Runs"<<setw(15)<<"Innings"<<setw(20)<<"Times Not Out"<<setw(15)<<"Average"<<endl;
	line();
	for(i=0;i<5;i++)
	{
		cout<<left<<setw(15)<<rec[i].n<<right<<setw(15)<<rec[i].r<<setw(12)<<rec[i].i<<setw(18)<<rec[i].t<<setw(20)<<fixed<<setprecision(3)<<rec[i].avg<<endl;
	}
	line();
	cout<<endl;
	star();
	cout<<right<<setw(44)<<"Finish\n";
	star();
	return 0;
}
