#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=1;i<=10;i++)
    {
        printf("enter a number");
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
    {
        printf("%d\n",a[i]);
    }

}