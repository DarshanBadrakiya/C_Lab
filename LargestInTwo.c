#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is largest");
	}
	else
	{
		printf("b is largest");
	}
	return 0;
}