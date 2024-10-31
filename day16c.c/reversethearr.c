#include<stdio.h>
void reverse(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
        
         {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        }
}
int main()
{
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter a array element:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    reverse(arr,n);
      printf("the reversed array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}