#include <stdio.h>
int main()
{
    int choice,a,b,ans;
    printf("Enter your choice\n");
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    switch (choice)
    {
    case 1:
        ans=a+b;
        printf("Sum = %d",ans);
        break;
    case 2:
        ans=a-b;
        printf("Sub=%d",ans);
        break;
    case 3:
        ans=a*b;
        printf("Product=%d",ans);
        break;
    case 4:
        ans=a/b;
        printf("Div=%d",ans);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}