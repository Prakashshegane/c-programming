#include<stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*n;
    printf("%d\n",fact);
}