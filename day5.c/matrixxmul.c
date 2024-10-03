#include<stdio.h>
int main()
{
    int row,column;
    printf("enter the size of row and column:");
    scanf("%d%d",&row,&column);
    int matrix1[row][column],matrix2[row][column],mul[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            mul[i][j]=matrix1[i][j]*matrix2[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}