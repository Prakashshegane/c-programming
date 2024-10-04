#include<stdio.h>
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the allue of A is:%d\n",a);
    printf("the value of B is:%d",b);
}
int main()
{
    int a,b;
    printf("ente a A value:");
    scanf("%d",&a);
    printf("enter a B value:");
    scanf("%d",&b);
    swap(a,b);
}