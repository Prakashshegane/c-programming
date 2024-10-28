#include<stdio.h>
int main()
{
    int num,i=1,fact=1;
    printf("enter a numbber:");
    scanf("%d",&num);
    if(num<=0)
    printf("the number not possible for factorial");
    else
    {
    while(i<=num)
    {
     fact=fact*i;
     i++;
    }
    }
    printf("%d ",fact);
}