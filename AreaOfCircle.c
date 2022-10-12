#include <stdio.h>

int main(int argc, char const *argv[])
{
	int r;
	float area;
	printf("Enter the radious\n");
	scanf("%d",&r);
	area = 3.14*r*r;
	printf("The area of circle is %f",area);
	return 0;
}