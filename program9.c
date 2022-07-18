#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a value ");
    scanf("%d",&a);
    printf("Enter b value ");
    scanf("%d",&b);
    printf("Enter c value ");
    scanf("%d",&c);
    if(a==b && b==c && c==a)
        printf("%d",a);
    else if(a>b && a>c)
        printf("%d is greatest",a);
    else if(b>c)
        printf("%d is greatest",b);
    else
        printf("%d is greatest",c);
    return 0;
}

