//Write a program that displays text on Windows BGI Screen using outtext() and outtextxy() functions.

#include <graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	outtext("Cyber Hawk");
	outtextxy(30,50,"Cyber Hawk");
	getch();
	closegraph();
	return 0;
}
