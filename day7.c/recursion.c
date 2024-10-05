#include<stdio.h>
int factorial(int n)
{
    int fact;
    if(n==1)
    {
    return 1;
    }
    for(int i=0;i<=n;i++)
    {
      int sum=n*factorial(n-1);
      return sum;

    }
}
int main()
{
    int n;
    printf("enter a factorial number:");
    scanf("%d",&n);
   int fact= factorial(n);
   printf("%d",fact);
}