#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,count;
    while (count<=50)
    {
        printf("%d\n",i);
        i=i+3;
        count++;
    }
    return 0;
}
