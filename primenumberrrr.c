#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        printf("this %d is prime number",n);
    }
    else
    {
        printf("this %d is not prime number",n);
    }
}