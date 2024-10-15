#include<stdio.h>
#include<string.h>
int main()
{
    int arr[]={1,2,3,4,5,3,4,7};
    int sum;
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(arr[i]==arr[j])
            printf("the duplicate number is :%d",arr[i]);
        }
    }
}