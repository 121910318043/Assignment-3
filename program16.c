#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character ");
    scanf("%c",&c);
    if(c>='a' && c<='z')
        printf("'%c' is Lower case alphabet",c);
    else if(c>='A' && c<='Z')
        printf("'%c' is Upper case alphabet",c);
    else if (c>='0' && c<='9')
        printf("'%c' is a Digit",c);
    else
        printf("'%c' is a Special character",c);
    return 0;
}
