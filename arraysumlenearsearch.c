#include<stdio.h>
int arraysum(int a[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
sum=sum+a[i];
printf("sum of array element is : %d\n",sum);
}
int main()
{
int a[10],i,n;
printf("enter array size :\n");
scanf("%d",&n);
printf("enter %d elemnts :\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
arraysum(a,n);
}