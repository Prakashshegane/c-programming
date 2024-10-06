#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }   
    return n*fact(n-1); 
}
int main()
{
    int n,sum;
    printf("enter a number:");
    scanf("%d",&n);
    sum=fact(n);
    printf("%d",sum);
}