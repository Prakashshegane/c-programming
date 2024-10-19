#include<stdio.h>
int boublesort(int arr[])
{
        for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        { 
            if(arr[i]<arr[j])
            {
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
            }
        }
    }
    printf("the sorted arraay:");
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[6];
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    boublesort(arr);
}