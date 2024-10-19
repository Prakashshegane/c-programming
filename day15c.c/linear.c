#include<stdio.h>
#include<string.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=0;i<6;i++)
    {
        if(arr[i]==n)
        {
            printf("%d",i);
        }
    }
    return 0;
}