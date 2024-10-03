#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter a row size and column size:");
    scanf("%d%d",&n,&k);
    int arr[n][k];
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
          scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
}