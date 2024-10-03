#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}