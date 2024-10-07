#include<stdio.h>
int power(int base,int pow)
{
    int n=1;
        for(int j=0;j<pow;j++)
        {
            n=n*base;
        }
    printf("%d",n);
}
int main()
{
    int base,pow;
    printf("enter a base and power:");
    scanf("%d%d",&base,&pow);
    power(base,pow);
}