#include<stdio.h>
int main()
{
    int row,column;
    printf("enter a size of row and column:");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            sum=sum+arr[i][j];
        }
         printf("the sum is :%d\n",sum);
         sum=0;
    }
}