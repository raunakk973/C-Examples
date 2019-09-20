#include <stdio.h>
int main()
{
	float c;
	float f;
	printf("Program to convert Celcious into farenheit\n");
	printf("Enter temperature in Celcious : ");
	scanf("%f",&c);
	f = c * 1.8;
	f = f + 32;
	printf("Farenheit = %f",f);
}
