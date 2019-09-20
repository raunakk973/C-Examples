#include <stdio.h>
int main()
{
	float f;
	float c;
	printf("Program to convert temperature farenheit into celcious\n");
	printf("\nEnter the temperature in F : ");
	scanf("%f",&f);
	c = f - 32;
	c = c / 1.8;
	printf("Celcious = %f",c);
}
