#include <stdio.h>

int main()
{
	int sec,hour,minute,rem;
	printf("Enter the second\n");
	scanf("%d",&sec);
	hour = sec / 3600;
	rem = sec % 3600;
	minute = rem / 60;
	sec = rem % 60;
	printf("%d Hours %d Minute %d Second",hour,minute,sec);
	return 0;
}