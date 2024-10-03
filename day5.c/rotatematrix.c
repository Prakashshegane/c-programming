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
    for(i=column-1;i>=0;i--)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}