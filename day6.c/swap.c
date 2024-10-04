#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
    printf("the value of A is:%d\n",a);
    printf("the value of B is:%d",b);
}
int main()
{
    int a,b;
    printf("enter the value of A :");
    scanf("%d",&a);
    printf("enter the value of B :");
    scanf("%d",&b);
    swap(a,b);
}