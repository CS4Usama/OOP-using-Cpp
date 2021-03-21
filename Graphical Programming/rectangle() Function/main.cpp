//Write a program that draws square on BGI Window using rectangle() function in graphical programming.

#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
	int gd=DETECT, gm, err;
	initgraph(&gd,&gm,"");
	err=graphresult();
	if(err!=grOk)
	{
		cout<<"Graphics Error "<<grapherrormsg(err);
		exit(1);
	}
	rectangle(20,20,80,80);
	getch();
	closegraph();
	return 0;
}
