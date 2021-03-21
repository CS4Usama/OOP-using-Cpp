//Write a program that displays text with different colors on Windows BGI using color() functions in graphical programming.

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
	int m=getmaxcolor();
	for(int i=0; i<=m; i++)
	{
		setcolor(i);
		outtextxy(x,y,"Cyber Hawk");
		y+=20;
	}
	getch();
	closegraph();
	return 0;
}
