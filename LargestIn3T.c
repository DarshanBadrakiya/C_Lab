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
    lar=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The largest number is %d",lar);
    return 0;
}