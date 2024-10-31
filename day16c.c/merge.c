#include<stdio.h>
int merrge(int arr1[],int arr2[],int merge[])
{
    for(int i=0;i<5;i++)
    {
        merge[i]=arr1[i];
        scanf("%d",&merge[i]);
    }
    for(int i=0;i<5;i++)
    {
        
    }
}
int main()
{
    int arr1[5],arr2[5],merge[10];
    printf("enter a array1 :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter a array 2:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
    arrmerge(arr1,arr2,merge);
    printf("the merged array is :");
    for(int i=0;i<10;i++)
    {
        printf("%d ",merge[i]);
    }
}