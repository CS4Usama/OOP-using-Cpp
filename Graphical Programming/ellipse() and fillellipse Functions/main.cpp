//Write a program that draws an arc and ellipse on BGI Window using ellipse() and fillellipse() functions in graphical programming.

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
	ellipse(130,70,90,180,100,50);
	fillellipse(130,150,100,50);
	getch();
	closegraph();
	return 0;
}
