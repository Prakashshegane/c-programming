#include<stdio.h>
int main()
{
    int base,expotential;
    int result=1;
    printf("enter a expotential:");
    scanf("%d",&expotential);
    printf("enter a base:");
    scanf("%d",&base);
    while(expotential!=0)
    {
        result=result*base;
        --expotential;
    }
    printf("%d",result);
}