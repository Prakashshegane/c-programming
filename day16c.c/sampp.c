#include<stdio.h>
int main()
{
    int arr[2][3]={{1,2,3},{4}};
    int i=0,j=0;
    for(i=0;i<2;i++)
    for(j=2;j>=0;j--)
    printf("%d",arr[i][j]);
    return 0;
}