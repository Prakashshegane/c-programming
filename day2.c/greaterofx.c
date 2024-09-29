#include<stdio.h>
int main()
{
    int num=4,count=0,i,arr[8]={1,2,3,4,5,6,7,8};
    for(i=0;i<8;i++)
    {
        if(num<arr[i]){
        printf("%d",arr[i]);
        count++;
        }
    }
    printf("\n%d",count);
}