#include<stdio.h>
int main()
{
    int i,size;
    printf("enter a size:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}