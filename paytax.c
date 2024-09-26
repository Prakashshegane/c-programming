#include<stdio.h>
int main()
{
    int tax,income;
    printf("enter a income:");
    scanf("%d",&income);
    if(income<=100000)
    printf("no tax");
    else
    if(income<=20000)
    {
    tax=0.1*(income-10000);
    printf("tax=%d",tax);
    }
    else
    {
        tax=0.2*income;
        printf("tax=%d",tax);
    }

}