#include<stdio.h>
int main()
{
    int a[10][10],m,n,i,j;
    printf("enter  row and column size :\n ");
    scanf("%d%d",&m,&n);
    printf("enter %d elements :\n ",m*n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("displaying matrix :\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    printf("%4d",a[i][j]);
    printf("\n");}

}