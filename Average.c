#include <stdio.h>

int main()
{
	int a,b,c;
	float avg;
	printf("Enter number 1:\n");
	scanf("%d",&a);
	printf("Enter number 2:\n");
	scanf("%d",&b);
	printf("Enter number 3:\n");
	scanf("%d",&c);
	avg = (a+b+c)/3;
	printf("The average is %f\n", avg);
	return 0;
}