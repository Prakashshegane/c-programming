#include<stdio.h>
int sum(int n,int s)
{
    int add=0;
    if(n==0)
    {
        printf("%d\n",s);
        return 1;
    }
    sum(n-1,s+n);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    sum(n,0);
}