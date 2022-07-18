#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter Marks scored in English ");
    scanf("%d",&a);
    printf("Enter Marks scored in C Language ");
    scanf("%d",&b);
    printf("Enter Marks scored in Maths ");
    scanf("%d",&c);
    printf("Enter Marks scored in Compiler Design ");
    scanf("%d",&d);
    printf("Enter Marks scored in DBMS ");
    scanf("%d",&e);
    if(a>32 && b>32 && c>32 && d>32 && e>32)
        printf("Passed");
    else
        printf("Failed");
    return 0;
}
