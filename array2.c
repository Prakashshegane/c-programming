#include<stdio.h>
int main()
{
int a[10],i,n;
printf("enter the array size :\n");
scanf("%d",&n);
printf("enter the  elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("displying array :\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}