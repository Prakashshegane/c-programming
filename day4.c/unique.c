#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,1,2,3,5};
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]!=arr[j])
            {
                printf("%d is the unque",arr[i]);
            }
        }
    }
}