#include<stdio.h>
int incrising(int n)
{
    int sum;
    if(n==0)
    {
        return 1;
    }
    incrising(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    incrising(n);
}