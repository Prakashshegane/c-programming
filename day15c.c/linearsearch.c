#include<stdio.h>
int linearsearch(int arr[],int key,int n)
{
    int check;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
           check=i;
        }
    }
    return(check);
}
int main()
{
    int n,key;
    printf("enter a n value:");
    scanf("%d",&n);
    int arr[n];
    printf("enter a key value:");
    scanf("%d ",&key);

    for(int i=0;i<n;i++)
    {

            scanf("%d",&arr[i]);
    }
        for(int i=0;i<n;i++)
    {
            printf("%d ",arr[i]);
    }
    printf("\n");
    int result=linearsearch(arr,key,n);
    printf("%d",result);
}