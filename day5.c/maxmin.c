#include<stdio.h>
int main()
{
    int row,column;
    printf("enter a row and column:");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<column;j++)
     {
        scanf("%d",&arr[i][j]);
     }
    }
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("the max number is :%d\n",max);
    printf("the min number is :%d",min);
}