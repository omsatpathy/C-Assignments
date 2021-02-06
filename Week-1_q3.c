#include<stdio.h>
int main()
{
    float r;
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    printf("Diameter = %.3f unit\n",2*r);
    printf("Circumference = %.3f unit\n",2*3.1415*r);
    printf("Area = %.3f unit%c ",3.1415*r*r,(char)253);
    return 0;
}