#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	printf("Enter c:\n");
	scanf("%d",&c);
	if(a>b)
	{
		if(b>c)
		{
			printf("b is largest");
		}
		else
		{
			printf("c is largest");
		}
	}
	else if(a>c)
	{
		printf("a is largest");
	}
	else
	{
		printf("c is largest");
	}
	return 0;
}