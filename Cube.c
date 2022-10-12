#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,cube;
	printf("Enter a number\n");
	scanf("%d",&n);
	cube = n*n*n;
	printf("The cube is %d",cube);
	return 0;
}