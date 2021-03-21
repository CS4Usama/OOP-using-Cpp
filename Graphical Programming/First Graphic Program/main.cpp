//Write a program that displays a message on Windows BGI Screen using graphics.h header file.

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
	outtext("Cyber Hawk");
	getch();
	closegraph();
	return 0;
}
