#include<stdio.h>
int main()
{
 int n,i,a[10];
 printf("enter the array size :\n");
 scanf("%d",&n);
 printf("enter the array element :",n);
 for(i=0;i<n;i++)
 scanf("%d\n",&a[i]);
 printf("array elemnts are ");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
}