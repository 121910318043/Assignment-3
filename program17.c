#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter length of side 1 ");
    scanf("%d",&s1);
    printf("Enter length of side 2 ");
    scanf("%d",&s2);
    printf("Enter length of side 3 ");
    scanf("%d",&s3);
    if((s1+s2)>s3 && (s2+s3)>s1 && (s3+s1)>s2)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");
    return 0;
}
