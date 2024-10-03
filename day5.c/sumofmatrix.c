#include<stdio.h>
int main()
{
    int sum=0,arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("the sum of array is =%d",sum);
}