#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    printf("%.2f + %.2f = %.2f \n",a,b,a+b);
    printf("%.2f - %.2f = %.2f\n",a,b,a-b);
    printf("%.2f * %.2f = %.2f\n",a,b,a*b);
    printf("%.2f / %.2f = %.2f\n",a,b,a/b);
    printf("Remainder when %.2f is divided by %.2f = %d",a,b,(int)a%(int)b));
    return 0;
}
