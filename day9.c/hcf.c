#include<stdio.h>
int hcf(int a,int b,int c,int d)
{
    int min,sum;
    if(a<b && a<c && a<d)
    {
         min=a;
    }
    else if(b<a && b<c && a<d)
    {
      min=b;
    }
    else if(c<a && c<b && c<d)
    {
        min=c;
    }
    else{
        min=d;
    }
    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0 && c%i==0 && d%i==0)
        {
             sum=i;
        }
    }
    printf("the hcf is:%d",sum);
}
int main()
{
    int a,b,c,d;
    printf("enter a number:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    hcf(a,b,c,d);
}