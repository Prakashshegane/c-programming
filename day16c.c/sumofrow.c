#include<stdio.h>
int main()
{
    int row,column ,sum=0;
    printf("enter the row size:");
    scanf("%d",&row);
    printf("enter the column size:");
    scanf("%d",&column);
    int arr[row][column];
    printf("enter a 2dm array elements:");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
        for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("the %d row of sum of element is :%d\n",i,sum);
        sum=0;
    }
}