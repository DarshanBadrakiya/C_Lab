#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n >= 0)
	{
		printf("The number is positive");
	}
	else
	{
		printf("The number is negitive");
	}
	return 0;
}