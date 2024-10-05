#include<stdio.h>//wrong
int fibo(int n)
{
    if(n==0 && n==2) return 1;
    return fibo(n-1)+fibo(n-2);
   /* int a=0,b=1,c;
    for(int i=0;i<=n;i++)
    {
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
    }*/
   //return fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
   int n;
   printf("enter a n value:");
   scanf("%d",&n);
   printf("%d",fibo(n));
   return 0;
}