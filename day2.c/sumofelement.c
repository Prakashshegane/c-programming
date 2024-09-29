#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    for(i=0;i<10;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum is= %d",sum);
}