#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);
    if(cp>sp)
    {
        printf("%f%% loss",(((cp-sp)*100.0)/cp));
    }
    if(sp>cp)
    {
        printf("%f%% profit",(((sp-cp)*100.0)/sp));
    }
    return 0;
}
