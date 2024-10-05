#include<stdio.h>
int sum(int n)
{
    int add;
    if(n==1 ||n==0)
    {
        return 1;
    }
    add=n+sum(n-1);
    return add;
}
int main()
{
    int fact,n;
    printf("enter a number:");
    scanf("%d",&n);
   fact=sum(n);
   printf("%d",fact);
}