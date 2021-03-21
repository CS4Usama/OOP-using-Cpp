//Write a program that draws circle on BGI Window using circle() function in graphical programming.

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
	circle(100,100,70);
	getch();
	closegraph();
	return 0;
}
