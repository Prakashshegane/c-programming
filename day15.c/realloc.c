#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n,*ptr,*ptr2,arr[6];
    printf("enter a number:");
    scanf("%d",&n);
    ptr=(int*) malloc(n* sizeof(int));
    printf("enter a number:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("enter a number:");
    scanf("%d",&n1);
    
   ptr2=(int*) realloc (ptr2,n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
}