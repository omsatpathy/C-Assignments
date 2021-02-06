#include<stdio.h>
int main()
{
    float c;
    printf("Enter the temperature in degree celcius : ");
    scanf("%f",&c);
    printf("%.3f %cC is %.3f %cF.",c,(char)248,1.8*c+32,(char)248);
    return 0;
}