#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,10,6,7,888,9};
    int max=arr[0];
    for(int i=1;i<=9;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("the gretest elemet is %d",max);
}