#include <stdio.h>
int main()
{
    int a,b,c,lar;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    lar=(a>b)?(a*c):(b*c);
    printf("Largest number is %d",lar);
    return 0;
}