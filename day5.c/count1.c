#include<stdio.h>
int main()
{
    int i,j,row,column,count=0;
    printf("enter the size of row and column:");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }
        printf("the number of 1 ocuurs= %d times",count);
        printf("\n");
        count=0;
    }
}