#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[]={7,4,5,9,8,2,1};
    printf("unsorted array :  ");
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<7;i++)
    {
        int min=INT_MAX;
        int minindex=-1;
        for(int j=i;j<7;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                minindex=j;
            }
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
    printf("\n");
    printf("the sorted array : ");
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }

}