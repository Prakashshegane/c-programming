//compile time run
#include<stdio.h>
int main()
{
    int a[2][3][4]={1,2,3,4,5,6,7,8,9,1,2,3,4};
    int i,j,k;
    for(i=0;i<2;i++)
    {
       for(j=0;j<3;j++)
       {
        for(k=0;k<4;k++)
        printf("%3d",a[i][j][k]);
        printf("\n");
    }
    printf("\n");
    }

}