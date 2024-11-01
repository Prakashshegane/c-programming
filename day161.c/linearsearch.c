#include<stdio.h>
void linearsearch(int *arr,int n)
{
    for(int i=1;i<7;i++)
    {
        if(arr[i]==n)
        {
            printf("%d is present at location %d\n",n,i);
            break;
        }
    }
}
int main()
{
    int arr[]={5,6,9,5,4,7,6};
    int n=6;
    linearsearch(arr,n);
    return 0;
}