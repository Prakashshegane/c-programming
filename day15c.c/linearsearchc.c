#include<stdio.h>
int linearsearch(int arr[],int n)
{
    for(int i=0;i<7;i++)
    {
        if(arr[i]==n)
        {
            printf("%d is present in the location %d",n,i);
        }
    }
}
int main()
{
    int arr[7];
    printf("enter the array:");
    for(int i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    int n=4;
    linearsearch(arr,n);
}