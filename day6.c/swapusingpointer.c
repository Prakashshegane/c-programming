#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
    return;  
}
int main()
{
    int a=6,b=7;
    swap(&a,&b);
     printf("%d\n",a);
    printf("%d",b);
}