#include<stdio.h>
int main()
{
    int a[10],i,sum=0,avg;
    for(i=0;i<10;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum + a[i] ;
    }
    printf("sum=%d\n",sum);
    //avg=(sum/10);
    //printf("%d is the avg",avg);
}