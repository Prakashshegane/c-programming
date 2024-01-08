//run time initilization
#include<stdio.h>
int main()
{
    int a[5][10][10],i,j,k,p,q,r;
    printf("enter the table size and row size and colums size :");
    scanf("%d%d%d",&p,&p,&r);
    printf("enter elements :");
    for(i=0;i<p;++i)
    for(j=0;j<q;++j)
    for(k=0;k<r;++k)
    scanf("%d",&a[i][j][k]);
    printf("displaying 3d array :");
    for(i=0;i<p;++i)
    {
        for(j=0;j<q;++j)
        {
            for(k=0;k<r;++k)
            printf("%3d",a[i][j][k]);
            printf("\n");
        }
    }
    printf("\n");
}