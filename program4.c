#include<stdio.h>
int main()
{
    int n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    s=n/10;

    if(n==(s*10) || n==(s*10+2) || n==(s*10+4) || n==(s*10+6) || n==(s*10+8))
        printf("even");
    else
        printf("odd");
    return 0;
}
