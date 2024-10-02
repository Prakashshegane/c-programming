#include<stdio.h>
int main()
{
    int r=4,m=2;
    int arr[r][m];
    for(int i=0;i<4;i++)
    {
        for(int j=1;j<=2;j++)
        {
            scanf("%d",&arr[r][m]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=1;j<=2;j++)
        {
            printf("%d",arr[r][m]);
        }
        printf("\n");
    }
}