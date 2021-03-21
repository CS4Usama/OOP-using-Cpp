//Write a program that draws 2D and 3D rectangles with patterns and colors on Windows BGI using bar() and bar3d() functions in graphical programming.

#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
	int gd=DETECT, gm, err,x=30,y=30;
	initgraph(&gd,&gm,"");
	err=graphresult();
	if(err!=grOk)
	{
		cout<<"Graphics Error "<<grapherrormsg(err);
		exit(1);
	}
	setcolor(BLUE);
	setfillstyle(3,LIGHTRED);
	bar(30,30,100,150);
	setfillstyle(11,CYAN);
	bar3d(150,30,220,150,10,1);
	getch();
	closegraph();
	return 0;
}
