#include <stdio.h>

int main()
{
	int year;
	printf("Ente a year\n");
	scanf("%d",&year);
	if(year % 4 == 0)
	{
		printf("The year is leap");
	}
	else
	{
		printf("The year is not leap");
	}
	return 0;
}