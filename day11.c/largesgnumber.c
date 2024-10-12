#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b>c)
    {
        printf("the %d is greater",a);
    }
    else if(b>a && b>c)
    {
        printf("the %d is greater",b);
    }
    else{
        printf("the %d is greater",c);
    }
}