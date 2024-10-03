#include<stdio.h>
int main()
{
    int i,j,n,row,column;
    printf("enter the size of row and column:");
    scanf("%d%d",&row,&column);
    printf("enter a number for search:");
    scanf("%d",&n);
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
            if(arr[i][j]==n)
            {
                printf("the serched element is %d",arr[i][j]);
            }
        }
    }
}