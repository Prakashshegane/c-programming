#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a number:");
    scanf("%d",&n);
        if(n%i==0 && n%2!=0)
        {
            printf("this is prime number");
        }
        else{
            printf("this is not a prime number"); 
        }
}