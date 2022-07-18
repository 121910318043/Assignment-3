#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5)
        printf("Number is Not divisible by 5");
    else
        printf("Number is Divisible by 5");
    return 0;
}
