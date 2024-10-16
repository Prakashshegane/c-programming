#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,arr[6];
    printf("enter a number:");
    scanf("%d",&n);
    ptr=(int*) calloc(n, sizeof(int));
    printf("enter a number:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(ptr);
}