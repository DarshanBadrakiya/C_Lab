#include <stdio.h>

int main(int argc, char const *argv[])
{
	int days,year,week,rem,day;
	printf("Enter days\n");
	scanf("%d",&days);
	year = days / 365;
	rem = days % 365;
	week = rem / 7;
	day = rem % 7;
	printf("%d Years %d Week %d Days\n",year,week,day);
	return 0;
}