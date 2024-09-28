#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter a number a,b,c:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b&&a<c&&a<d)
    {
        printf("%d is the lesser",a);
    }
    else if(b<a&&b<c&&d)
    {
        printf("%d is the lesseer",b);

    }
    else if(c<a&&c<b&&c<d)
    {
        printf("%d is the lesser",c);
    }
    else{
        printf("%d is the lseer",d);
    }
}