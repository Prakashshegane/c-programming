#include<stdio.h>
void reversearray(int *arr,int size)
{
    for(int i=0;i<size/2;i++)
        {
            int temp=arr[i];
            arr[i]=arr[size-i-1];
            arr[size-i-1]=temp;
        }
}
int main()
{
    int size;
    printf("enter the array size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array element:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array of before swaping:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    reversearray(arr,size);
    printf("\n");
    printf("array of after swaping:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}