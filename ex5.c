#include <stdio.h>
int main()
{
	float c;
	float m,k;
	printf("Program to convert centimeter into meter and kilometer\n");
	printf("\nEnter the centimeter : ");
	scanf("%f",&c);
	m = c / 100;
	k = m / 1000;
	printf("Meter = %f",m);
	printf("\nKilometer = %f",k);
}
