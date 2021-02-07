#include<stdio.h>
int main()
{
    char c,ch='y';
    while(ch=='y')
    {
    printf("Enter an alphabet : "); scanf(" %c",&c);
    switch(c)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I': 
        case 'o':
        case 'O': 
        case 'u':
        case 'U': printf("Entered alphabet '%c' is a vowel.",c); break;
        default:  
        if(((int)c>=(int)'a' && (int)c<=(int)'z') || ((int)c>=(int)'A' && (int)c<=(int)'Z')) 
        printf("Entered alphabet '%c' is a consonant.",c);
        else
        printf("Entered character '%c' is not an alphabet.",c);

    }
    printf("\nWant to continue(y/n) ? : "); scanf(" %c",&ch);
    
    }

    return 0;
}
