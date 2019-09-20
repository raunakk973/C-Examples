#include <stdio.h>
int main()
{
	float r;
	float d,c,a;
	printf("Program to find the diameater,circumference & area by its radius\n");
	printf("\nEnter the radius : ");
	scanf("%f",&r);
	d = 2 * r;
	c = 3.14;
	c = 2 * c * r;
	a = 3.14;
	r = r * r;
	a = a * r;
	printf("\nDiameter = %f",d);
	printf("\nCircumference = %f",c);
	printf("\nArea = %f",a);
}
