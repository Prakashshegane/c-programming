#include<stdio.h>
int sumofdigit(int n)
{
    int rem=0,sum=0;
    while(n>0)
    {
    rem=(n%10);
    sum=sum+rem;
    n=(n/10);
    }
 return(sum);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sumof=sumofdigit(n);
    printf("%d",sumof);
}