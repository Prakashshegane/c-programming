#include<stdio.h>
int main()
{
    int arr[]={3,4,2,9,7,4,5,1};
    int n=8;
    printf("the unsorted array :");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0 && arr[j-1]>arr[j];j--)
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }

    }
    printf("the sorted array is :");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}