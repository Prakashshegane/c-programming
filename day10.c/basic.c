//function prototype
#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    factorial(n);
}
int factorial(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
    {
      fac=fac*i;
    }
    printf("the factorial is :%d",fac);
}