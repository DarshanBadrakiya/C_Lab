#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter a number\n");
    scanf("%d", &b);
    while (a <= b)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
        a++;
    }
    return 0;
}
