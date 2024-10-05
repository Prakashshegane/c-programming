#include<stdio.h>
int main()
{
    int n;
    printf("enter a binary value:");
    scanf("%d",&n);
    int decimal=0,weight=1;
    while(n!=0)
    {
        int rem=n%10;
        decimal=decimal+rem*weight;
        n=n/10;
        weight=weight*2;
    }
    printf("the decimal nuberr is:%d",decimal);
    
}