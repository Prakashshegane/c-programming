//sum of elements in array 
#include<stdio.h>
int main()
{
int a[10],i,n,sum=0;
printf("enter the array size :\n");
scanf("%d",&n);
printf("enter the %d elements :\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum=sum+a[i];
printf("sum of array element is %d ",sum);
}