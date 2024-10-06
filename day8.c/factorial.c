#include<stdio.h>
int fact(int n)
{
    int fac=1;
    if(n==0) 
    {
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
      fac=fac*i;
    }
    printf("%d",fac);
    
}
int main()
{
    int n,sum;
    printf("enter a number:");
    scanf("%d",&n);
    fact(n);
}