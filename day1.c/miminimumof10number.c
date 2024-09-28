#include<stdio.h>
int main()
{
    int a[10],i,min;
    for(i=1;i<=10;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
    }
    min=999;
    for(i=1;i<=10;i++)
    {
    if(a[i]<min)
    {
        min=a[i];
    }  
    }  
    printf("%d is the minimum number",min);
}