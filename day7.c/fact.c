#include<stdio.h>
void fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
         fact=fact*i;
    }
    printf("the factorial of %d is :%d",n,fact);
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    fact(n);
}