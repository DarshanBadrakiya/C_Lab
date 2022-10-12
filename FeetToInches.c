#include <stdio.h>

int main()
{
	int feet,inches;
	printf("Enter value in feet\n");
	scanf("%d",&feet);
	inches = 12*feet;
	printf("inches = %d",inches);
	return 0;
}