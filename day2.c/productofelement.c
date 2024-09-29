#include<stdio.h>
int main()
{
    int i,product=1,a[10];
    for(i=0;i<10;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        product=product*a[i];
    }
    printf("product=%d",product);
}