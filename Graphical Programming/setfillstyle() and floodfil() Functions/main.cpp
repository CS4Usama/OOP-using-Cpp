//Write a program that draws ellipse and circle with patterns and colors on Windows BGI using setfillstyle() and floodfill() functions in graphical programming.

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
	setcolor(RED);
	setfillstyle(8,10);
	fillellipse(100,50,50,25);
	circle(150,150,50);
	floodfill(150,150,4);
	getch();
	closegraph();
	return 0;
}
