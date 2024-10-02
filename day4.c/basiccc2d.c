#include<stdio.h>
int main()
{
    int r,c;
    printf("enter a number of rows and columns:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}