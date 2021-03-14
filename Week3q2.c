#include<stdio.h>
int factorial(int n)
{
    int a=n-1;
    if(n==0)
    return 1;
    else{
        
        while(a!=0)
        {
            n=n*a;
            a--;
        }
    }
    return n;
}
int main()
{
    int n;
    printf("Enter the number : "); scanf("%d",&n);
    printf("The factorial is : %d",factorial(n));

    return 0;
}