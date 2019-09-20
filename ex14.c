#include <stdio.h>
int main()
{
	float a,b,c,d,e,t,av,p;
	printf("Program to find total, average, and percentge by marks in five subject.\n");
	printf("Enter the marks of five subject\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	t = a + b + c + d + e;
	av = t / 5 ;
	p = t / 500 ;
	p = p * 100 ;
	printf("Total = %f",t);
	printf("\nAveragee = %f",av);
	printf("\nPercentage = %f",p);
}
