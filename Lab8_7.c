#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,sum=0,i=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    while (i<=n)
    {
        sum += i;
        i++;
    }
    printf("The sum is %d",sum);
    return 0;
}
