//sum of rows
/* 4 5 6
 6 7 3
1 2 3*/
#include<stdio.h>
int main()
{
    int arr[3][3];
    printf("enter a array:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
           printf("\n");
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
}