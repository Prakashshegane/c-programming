#include<stdio.h>
int display(int a[][10],int m,int n)
{
    int i,j;
    printf("displaying matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%4d",a[i][j]);
        printf("\n");
    }
}
display_transpose(int a[][10],int m,int n)
{
    int i,j;
    printf("displaying tranpose matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%4d",a[j][i]);
        printf("\n");
    }
}
int main()
{
    int a[10][10],i,j,m,n;
    printf("enter the rows and columns size :\n");
    scanf("%d%d",&m,&n);
    printf("enter the array %d elements ",m*n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    display(a,m,n);
    display_transpose(a,m,n);
}