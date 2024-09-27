#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        sum=n*i;
        printf("%d*%d=%d\n",n,i,sum);
    }
}