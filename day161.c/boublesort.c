#include<stdio.h>
void boublesort(int *arr,int size)
{
    
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(*(arr+i)>*(arr+j))
            {
            int temp=*(arr+i);
            *(arr+i)=*(arr+j);
            *(arr+j)=temp;
            }
        }
    }
}
int main()
{
    int size;
    printf("enter athe array size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d ",&arr[i]);
    }
    printf("the array of before sorting:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    boublesort(arr,size);
    printf("the sorted array is :");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}