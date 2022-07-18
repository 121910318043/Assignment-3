#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%6)
        printf("Not divisible by 2 & 3");
    else
        printf("Divisible by 2 & 3");
    return 0;
}
