#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0)
        printf("number is positive");
    if(n<1)
        printf("number is non-positive");
    return 0;
}
