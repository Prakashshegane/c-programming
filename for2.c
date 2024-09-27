#include<stdio.h>
int main()
{
    int i,n,sum,num=2;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      sum=num*i;
      printf("%d\n",sum);
    }

}