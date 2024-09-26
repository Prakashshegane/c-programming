#include<stdio.h>
int main()
{
    int sum=0,n,i,count;
    scanf("%d",n);
    for(i=1;i<=n;i++)
    {
    sum=sum+i*i;
    printf("%d",sum);
    }
    return 0;
}