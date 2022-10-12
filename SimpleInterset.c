#include <stdio.h>

int main()
{
	int P,R,N;
	float si;
	printf("Enter the Principal\n");
	scanf("%d",&P);
	printf("Enter the Rate\n");
	scanf("%d",&R);
	printf("Enter the number of years\n");
	scanf("%d",&N);
	si = (P*R*N)/100;
	printf("Simple Interset = %f",si);
	return 0;
}