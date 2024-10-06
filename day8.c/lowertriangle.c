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
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(i>=j)
            {
                printf("%d ",arr[i][j]);
            }
            else{
                printf("%d ",0);
            }
        }
        printf("\n");
    }
    return 0;
}