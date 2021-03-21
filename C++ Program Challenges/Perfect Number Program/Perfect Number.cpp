#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	long num, c, mid, sum;
	while(true)
	{
		sum=0;
		printf("Input The Number (-1 to end the program): ");
		scanf("%i", &num);
		if(num==-1)
		{
			printf("\n===============PROGRAM TERMINATED===============");
			exit(0);
		}
		else
		{
			mid=num/2;
			printf("The Positive Divisors for The Given Number (%i) are: ", num);
			for(c=1;c<=mid;c++)
			{
				if(num%c==0)
				{
					printf("%i  ", c);
					sum=sum+c;
				}
			}
			printf("\nThe Sum of All Divisors is = %i\n",sum);
			if(sum==num)
			{
				printf("So, The Number is Perfect.\n");
				printf("================================================\n");
			}
			else
			{
				printf("So, The Number Is Not-Perfect.\n");
				printf("================================================\n");
			}
		}
	}
	getch();
}
