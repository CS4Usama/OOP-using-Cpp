//Exercise 1:

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	char str1[] = "0";
	char str2[] = "3.14159";
	char str3[] = "21 PGECHS";
	char str4[] = "PGECHS 21";
	char str5[] = "PGECHS21";
	char str6[] = "3.14159";
	char str7[] = ".987";
	char str8[] = "124z3yu87";
	char str9[] = "-34";
	char str10[] = "24.5";
	
	int num1=atoi(str1);
	int num2=atoi(str2);
	int num3=atoi(str3);
	int num4=atoi(str4);
	int num5=atoi(str5);
	int num6=atoi(str6);
	int num7=atoi(str7);
	int num8=atoi(str8);
	int num9=atoi(str9);
	int num10=atoi(str10);
	
	printf("Corresponding Numeric Variable to String (%s) is:  %d", str1,num1);
	printf("\nCorresponding Numeric Variable to String (%s) is:  %d", str2,num2);
	printf("\nCorresponding Numeric Variable to String (%s) is:  %d", str3,num3);
	printf("\nCorresponding Numeric Variable to String (%s) is:  %d", str4,num4);
	printf("\nCorresponding Numeric Variable to String (%s) is:  %d", str5,num5);
	printf("\nCorresponding Numeric Variable to String (%s) is:  %d", str6,num6);
	printf("\nCorresponding Numeric Variable to String (%s) is:  %d", str7,num7);
	printf("\nCorresponding Numeric Variable to String (%s) is:  %d", str8,num8);
	printf("\nCorresponding Numeric Variable to String (%s) is:  %d", str9,num9);
	printf("\nCorresponding Numeric Variable to String (%s) is:  %d", str10,num10);
	
	getch();
	return 0;
}
