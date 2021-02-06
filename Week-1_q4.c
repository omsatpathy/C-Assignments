#include<stdio.h>
int main()
{
    float p,ch,b,m,cm,prc;
    printf("Enter your marks in : \nPhysics : ");
    scanf("%f",&p);
    printf("\nChemistry : "); scanf("%f",&ch);
    printf("\nBiology : "); scanf("%f",&b);
    printf("\nMathematics : "); scanf("%f",&m);
    printf("\nComputer : "); scanf("%f",&cm);
    prc=(p+ch+b+m+cm)/5;
    printf("Total percentage = %.2f\n",prc);
    if(prc>=90) printf("Grade A");
    else if(prc>=80) printf("Grade B");
    else if(prc>=70) printf("Grade C");
    else if(prc>=60) printf("Grade D");
    else if(prc>=40) printf("Grade E");
    else printf("Grade E");
    
    return 0;
}