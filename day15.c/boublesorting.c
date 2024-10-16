#include<stdio.h>
int main()
{
    int arr[]={7,5,4,3,2,1};
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("the sorted array is :");
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}