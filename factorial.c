#include<stdio.h>
int main()
{   
    int num,fact=1,i=1;
    printf("enter anumber:");
    scanf("%d",&num);
    while(i<=num)
    {
    fact=fact*i;
    i++;
    }
    printf("the factorial of %d is %d",num,fact);
}