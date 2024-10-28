#include<stdio.h>
int main()
{
    int n,count=0,rem;
    printf("enter a nuber:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        count++;
        n=n/10;
    }
    printf("the number of digits is %d",count);
}