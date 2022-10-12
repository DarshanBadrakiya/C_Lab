#include <stdio.h>

int main()
{
	int m1,m2,m3,m4,m5;
	float per;
	printf("Enter marks:\n");
	scanf("%d",&m1);
	printf("Enter marks:\n");
	scanf("%d",&m2);
	printf("Enter marks:\n");
	scanf("%d",&m3);
	printf("Enter marks:\n");
	scanf("%d",&m4);
	printf("Enter marks:\n");
	scanf("%d",&m5);
	per = ((m1+m2+m3+m4+m5)/500.0
		)*100.0;
	printf("your percentage is %f\n",per);
	return 0;
}