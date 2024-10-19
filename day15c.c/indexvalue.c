#include<stdio.h>
int main()
{
    int arr[]={1,2,5,3,4,4,5};
    int n=5;
    int count=0;
    for(int i=0;i<7;i++)
    {
        if(arr[i]==n)
        {
            printf("%d is present at location %d",n,i);
            count++;
        }
        printf("\n");
    }
    printf("%d is present %d times in the arry",n,count);
}