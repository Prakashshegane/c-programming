#include<stdio.h>
int main()
{
    int n,d,sum=0,prod=1;
    printf("enter a number :");
    scanf("%d",&n);
    while(n>0)
    {
    d=n%10;
    sum=sum+d;
    prod=prod*d;
    n=n/10;
    }
    printf("%d\n",sum);
    printf("%d",prod);
}