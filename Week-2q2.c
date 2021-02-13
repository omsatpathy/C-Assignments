#include<stdio.h>
int main()
{
    int i,j,a[11],s=0;
    a[0]=1;
    printf("Enter the array elements : \n");
    for(i=1;i<=10;i++)
    {
        scanf(" %d ",&a[i]);
    }
    for(j=1;j<=10;j++)
    {
        
        if(j%2==0 || a[j]%2==0)
        s=s+a[j];
    }
    printf("Sum is : %d",s);
    return 0;
}