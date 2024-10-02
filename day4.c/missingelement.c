#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,5,6,7,8};
    int i,x=8;
    for(int i=0;i<7;i++)
    {
        if(arr[i]==x)
        {
            printf("%d is present in the array and its index is %d\n",x,i);
        }
    }
    return 0;
}