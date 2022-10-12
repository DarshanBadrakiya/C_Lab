#include <stdio.h>

int main()
{
	int h,b;
	float area;
	printf("Enter the height of triangle\n");
	scanf("%d",&h);
	printf("Enter the base of triangle\n");
	scanf("%d",&b);
	area = 0.5*h*b;
	printf("Area of triangle is %f",area);
	return 0;
}