/*how many pair have in the array if put a valuve x to 5 ,two array elemt adda the result will x value and also count how much possible times*/
#include<stdio.h>
int main()
{
    int i,count=0,arr[9]={1,2,4,5,6,7,8,9,3};
    int j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<9;i++)
    {
     for(j=i+1;j<9;j++)
     {
       if(arr[i]+arr[j]==n)
       {
        printf("(%d,%d)\n",arr[i],arr[j]);
        count++;
        }
     }
    }
    printf("count=%d",count);
}