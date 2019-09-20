#include <stdio.h>
int main()
{
	float l,b;
	float a,p;
	printf("Program to find the perimeter and area of rectangle by its length and breadth.\n");
	printf("Enter the length and breadth\n");
	scanf("%f%f",&l,&b);
	a = l * b;
	p = l + b;
	p = 2 * p;
	printf("Area = %f\n",a);
	printf("Perimeter is %f",p);
}
