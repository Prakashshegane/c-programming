#include<stdio.h>
void checkprime(int n)
{
    if(n%2!=0)
    {
        printf("%d is prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    checkprime(n);
}