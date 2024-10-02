#include<stdio.h>
int main()
{
int arr[7]={1,2,3,4,5,6,7};
int barr[7];
for(int i=0;i<7;i++)
{
    barr[i]=arr[6-i];
}
for(int i=0;i<7;i++)
{
printf("%d",barr[i]);
}
}