#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n,l=0,r=5;
    int mid=(l+r)/2;
    printf("enter a key:");
    scanf("%d",&n);
    if(n>arr[mid])
    {
        l=mid,r=5;
        
    }
}