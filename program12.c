#include<stdio.h>
int main()
{
    char c;
    printf("Enter an Alphabet: ");
    scanf("%c",&c);
    if(c>='a' && c<='z')
        printf("The Alphabet is in Lower case");
    else if(c>='A' && c<='Z')
        printf("The Alphabet is in Upper case");
    else
        printf("Enter a valid Alphabet");
    return 0;
}
