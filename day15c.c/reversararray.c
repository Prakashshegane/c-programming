#include<stdio.h>
int reversarray(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
     printf("%d",arr[i]);
    }
}
int main()
{
    int n=5;
    int arr[5]={2,4,5,6,7};
    reversarray(arr,n);
}