#include<stdio.h>
void display(int a[],int n)
{
    int i;
    printf("displaying array :\n ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
int main()
{
int i,n,a[10];
printf("enter the array size: \n");
scanf("%d\n",&n);
printf("enter %d elements: \n",n);
for(i=0;i<n;i++)
scanf("%d\n",&a[i]);
display(a,n);
}
