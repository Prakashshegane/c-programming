#include<stdio.h>
int greeting(int n)
{
    if(n==0)
    {
        return 1;
    }
    printf("good maorning\n");
    greeting(n-1);
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    greeting(n);
}