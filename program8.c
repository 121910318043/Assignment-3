#include<stdio.h>
int main()
{
    int y;
    printf("Enter an Year ");
    scanf("%d",&y);
    if(y%400==0)
        printf("leap year");
    else if(y%100==0)
        printf("Not a leap year");
    else if(y%4==0)
        printf("Leap year");
    else
        printf("Not a leap year");
    return 0;
}
