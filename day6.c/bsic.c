#include<stdio.h>
void us()
{
    printf("i am in us\n");
    return;
}
void austrelia()
{
    printf("i am in austrelia\n");
    us();
    return;
}
void india()
{
    printf("i am in india\n");
    austrelia();
    return ;
}
int main()
{
    india();
    return 0;
}