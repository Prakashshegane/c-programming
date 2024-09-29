#include<stdio.h>
int main()
{
    int i,a[10],max;
    for(i=0;i<10;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("max is=%d",max);
}