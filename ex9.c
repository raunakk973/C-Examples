#include <stdio.h>
int main()
{
	int exp,bas,a,i;
	printf("Program to find the power of any number\n");
	printf("\nEnter the base : ");
	scanf("%d",&bas);
	printf("Enter the exponent : ");
	scanf("%d",&exp);
	a = bas;
	for (i=1;i<exp;i++)
	{
		bas = bas * a ;
	}
	printf("%d",bas);
}
