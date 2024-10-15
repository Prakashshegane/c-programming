#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int i=arr[0],j=arr[8];
    int target=8;
    while(i<j)
    {
    if(arr[i]+arr[j]==target)
    {
        printf("found array indexis is :%d%d",i,j);
        break;
    }
    else if(arr[i]+arr[j]>target)
    {
        j--;
    }
    else if(arr[i]+arr[j]<target)
    {
        i++;
    }
    }
}  