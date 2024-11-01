#include<stdio.h>
int location(int *arr,int n)
{
    int count=0;
    for(int i=0;i<7;i++)
    {
            if(arr[i]==n)
            {
                printf("%d is present at location %d\n",n,i);
                count++;
            }
    }
    printf("%d is present %d times in the array",n,count);
}
int main()
{
    int arr[]={1,2,3,2,3,4,5};
    int n=2;
    location(arr,n);
}