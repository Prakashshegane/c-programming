#include<stdio.h>
int binarysearch(int arr[],int n)
{
    int l=0,r=6;
    for(int i=0;i<7;i++)
    {
    int mid=(l+r)/2;
    if(arr[i]==n)
    {
        printf("%d is found at lication %d" ,n,i);
    }
    if(arr[i]<n)
    {
        l=0,r=mid;
        mid=(l+r)/2; 
    }
    if(arr[i>n])
    {
        mid=l,r=6;
        mid=(l+r)/2;
    }
    }
}
int main()
{
    int arr[7];
    int n=6;
    printf("enter a array:");
    for(int i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    binarysearch(arr,n);
}