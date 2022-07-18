#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of \"a\" ");
    scanf("%d",&a);
    printf("Enter value of \"b\" ");
    scanf("%d",&b);
    printf("Enter value of \"c\" ");
    scanf("%d",&c);
    if(((b*b)-(4*a*c))>0)
        printf("Roots are real & distinct");
    else if(((b*b)-(4*a*c))==0)
        printf("Roots are real & equal");
    else
        printf("Roots are imaginary");
    return 0;
}
