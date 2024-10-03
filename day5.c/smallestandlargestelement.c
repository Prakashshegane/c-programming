#include<stdio.h>
int main()
{
    int arr[6]={6,5,4,3,2,1};
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<6;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("the max number is: %d\n",max);
    printf("the min number is :%d",min);
}