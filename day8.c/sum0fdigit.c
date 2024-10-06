#include<stdio.h>
int sum(int n)
{
    int add=0;
    if(n==0)
    {
        return 1;
    }
    for(int i=0;i<3;i++)
    {
        int rem=(n%10);
        add=add+rem;
        n=(n/10);
    }
    printf("%d",add);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    sum(n);
}