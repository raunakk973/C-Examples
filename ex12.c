#include <stdio.h>
int main()
{
	float x = 0.5;
	float h, b;
	printf("Program to Find the Area by base and height\n");
	printf("\nEnter the base : ");
	scanf("%f",&h);
	printf("\nEnter the height : ");
	scanf("%f",&b);
	x = x * b * h;
	printf("Area = %f",x);
}
