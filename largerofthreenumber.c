#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
       if(b>a&&b>c)
       printf("%d is the gretest number.",b);
       if(c>a&&c>b)
       printf("%d is the gretest number.",c);
       
}