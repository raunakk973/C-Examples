#include <stdio.h>
int main()
{
	int days;
	int year = 0, week = 0;
	printf("Program to convert days into year, week & days\n");
	printf("Enter days : ");
	scanf("%d",&days);
	while(days >= 365)
	{
		days = days - 365;
		year = year + 1;
	}
	while(days >= 7)
	{
		days = days - 7;
		week = week + 1;
	}
	printf("\n%d year, %d week & %d days.",year,week,days);
}
		
