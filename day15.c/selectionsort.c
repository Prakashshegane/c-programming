#include<stdio.h>
int main()
{
    int arr[]={7,6,5,4,3,2,1};
    int n=7;
    printf("the unsoted array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++)                        // {7,3,5,4,3,2,1};
    {
        int min=arr[i];
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                minindex=j;
                min=arr[j];
            }
        }
        if(minindex!=i)
        {
            int temp=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;
        }
    }
    printf("the sorted array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}