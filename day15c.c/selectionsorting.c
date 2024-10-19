#include<stdio.h>
int main()
{
    int arr[]={4,32,23,4,5,67,7};
    for(int i=0;i<7;i++)
    {
        int min=arr[i];
        int minindex=i;
        {
            for(int j=i+1;j<7;j++)
            {
                if(arr[j]<min)
                {
                   min=arr[j];
                   minindex=j;
                }
            }
            if(minindex!=i)
            {
                int temp=arr[minindex];
                arr[minindex]=arr[i];
                arr[i]=temp;

            }
        }
    }
    printf("the sorted array is :");
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
}