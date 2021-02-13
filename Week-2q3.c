#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter a string : "); scanf("%s",&s);
    printf("The total number of words in given string is %d",strlen(s));
    return 0;
}