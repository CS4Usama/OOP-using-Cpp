//Exercise 2:

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char reg[15];
	printf("Enter Your Registration Number in the Format \"FA16-BCS-123\" :  ");
	scanf("%s", &reg);
	char *s;
	s = strtok(reg, "-");
	if(s)
		printf("\nStudent's Start Semester:  %s\n", s);
	s = strtok(NULL, "-");
	if(s)
		printf("Student's Program:  %s\n", s);
	s = strtok(NULL, "-");
	if(s)
		printf("Student's Roll Number:  %s\n", s);
	getch();
	return 0;
}
