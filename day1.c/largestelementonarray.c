#include<stdio.h>
int main()
{
    int a[10],i,largest;
    for(i=0;i<10;i++)
    {
        printf("enter a numbers:");
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>largest)
        {
         largest=a[i];
        }
    }
    printf("%d is largest",largest);
}