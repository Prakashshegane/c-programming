#include<stdio.h>
int largestelement(int arr[])
{
    int i;
    int large=arr[0];
    for(i=1;i<8;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    printf("the largest lement in the array is :%d",large);
}
int main()
{
    int arr[8];
    printf("enter a array element:");
    for(int i=0;i<8;i++)
    scanf("%d",&arr[i]);
    largestelement(arr);
}