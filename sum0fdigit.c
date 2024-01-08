#include<stdio.h>
int sumofdigit(int n)
{
    int d,sum;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }   
    return sum;
}
int main()
{
    int res,n;
    printf("enter n digits: \n");
    scanf("%d",&n);
    res=sumofdigit(n);
    printf("sum of digits %d",res);
}