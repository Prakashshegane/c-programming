#include<stdio.h>
int recursion(int n)
{
    int sum;
    if(n==0)
    {
        return 1;
    }
    printf("%d\n",n);
    recursion(n-1);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    recursion(n);
}