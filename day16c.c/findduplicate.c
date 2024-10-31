#include<stdio.h>
int findduplicate(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
            printf("%d ",arr[i]);
            }
        }
    }
}
int main()
{
    int arr[]={1,2,3,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    findduplicate(arr,size);
}