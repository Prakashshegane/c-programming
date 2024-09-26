#include<stdio.h>
int main()
{
    int fact=1,i,num,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
        printf("%d",fact);
    return 0;
}