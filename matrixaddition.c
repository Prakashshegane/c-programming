#include<stdio.h>
int addmatrix(int c[][10],int a[][10],int b[][10])
{
    int i,j,m,n;
    printf("displaying addition matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf(" %4d ",c[i][j]);
        }

    }
}
int Display(int a[][10],int m,int n)
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
display(int b[][10],int m,int n)
{
    int i,j;
    printf("displaying  matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%4d",b[i][j]);
        printf("\n");
    }
}
int main()
{
    int i,j,m,n,a[10][10],b[10][10],c[10][10];
    printf("enter the size of first matrix :\n");
    scanf("%d%d",&m,&n);
    printf("enter the size of second matrix :\n");
    scanf("%d%d",&m,&n);
    printf("enter %d elements of first matrix ",m*n);
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
    printf("enter %d the element of second matrix :",m*n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);  
    for(i=0;i<m;i++)
    for(j-0;j<n;j++)
    printf("displaying matrix 1 :\n");
    Display(a,m,n);
    printf("displaying matrix 1 :\n");
    display(b,m,n);
    addmatrix(c,a,b);
}