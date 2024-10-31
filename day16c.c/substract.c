#include<stdio.h>
int main()
{
    int row,column;
    printf("enter a row size:");
    scanf("%d",&row);
    printf("enter a column size:");
    scanf("%d",&column);
    int arr1[row][column],arr2[row][column],arr3[row][column];
    printf("enter a first aray element:");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter a second array element:");
        for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            arr3[i][j]=arr1[i][j]-arr2[i][j];
            //scanf("%d",&arr3[i][j]);, not neccesary to impliment
        }
    }
    printf("the substracted array is:");
        for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",arr3[i][j]);
        }
    }
}