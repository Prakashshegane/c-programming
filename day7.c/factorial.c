#include<stdio.h>
int factorial(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf("%d =%d\n",i,factorial(i));
    }    
    return 0;
}