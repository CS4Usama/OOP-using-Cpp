//Write a program that draws a line in graphical programming using line() function.

#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm,err;
	initgraph(&gd,&gm,"");
	err=graphresult();
	if(err!=grOk)
	{
		cout<<"Graphics Error "<<grapherrormsg(err);
		exit(1);
	}
	line(100,35,300,35);
	getch();
	closegraph();
	return 0;
}
