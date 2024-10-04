#include<stdio.h>
int addition(int a,int b)
{
    int sum;
    sum=a+b;
    //printf("%d",sum);
    return a+b;
}
int main()
{
    int a,b;
    float sum;
    printf("enter a number a & b value:");
    scanf("%d%d",&a,&b);
    int result=addition(a,b);
    printf("%d",result);
    return 0;
}