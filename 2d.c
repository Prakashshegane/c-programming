//run time initilization reading and writing an array
#include<stdio.h>
int main()
{
    int a[4][5]={1,2,3,4,5,6,7,8,9},i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        printf("%3d\n",a[i][j]);
        printf("\n");
    }
}