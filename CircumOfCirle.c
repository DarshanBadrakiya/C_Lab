#include <stdio.h>

int main()
{
	int r;
	float circ;
	printf("Enter the radious of circle\n");
	scanf("%d",&r);
	circ = 3.14*2*r;
	printf("Circumference of circle is %f",circ);
	return 0;
}
