#include<stdio.h>
#include<math.h>
int main()
{
    float n;
    printf("Enter a number to find it's square: "); scanf("%f",&n);
    float s=pow(n,2);
    printf("%.3f",s);
    return 0;
}