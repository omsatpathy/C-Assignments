#include<stdio.h>
int gcd(int m,int n)
{
    if(n!=0)
    return gcd(n,m%n);
    else
    return m;
}
int lcm(int p,int q)
{
    int x=1;
    if(x%p==0 && x%q==0)
    return x;
    x++;
    lcm(p,q);
    return x;
}
int main()
{
    int a,b;
    printf("Enter two positive integers : ");
    scanf("%d %d",&a,&b);
    int c,d;
    c=lcm(a,b);
    d=gcd(a,b);
    printf("LCM is %d",c);
    printf("GCD is : %d",d);
  
    return 0;
}