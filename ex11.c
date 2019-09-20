#include <stdio.h>
int main()
{
	int f,s,t;
	printf("Program to find the third angle from two given angle\n");
	printf("\nEnter the 1st angle : ");
	scanf("%d",&f);
	printf("Enter the 2nd angle : ");
	scanf("%d",&s);
	t = f + s ;
	t = 180 - t ;
	printf("\n3rd angle = %d",t);
}
