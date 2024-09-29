#include<stdio.h>
int main()
{
    int i,n,a[5];
    for(i=0;i<n;i++)
    {
      printf("enter a number:");
      scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}