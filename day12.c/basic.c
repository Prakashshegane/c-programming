#include<stdio.h>
int main()
{
    struct employ{
        int id;
        int salary;
        int percentage;
    };
    int id;
    struct employ prakash;
    printf("enter prakash id:");
    scanf("%d",&prakash.id);
    prakash.salary=888000;
    prakash.percentage=95;
    printf("%d",prakash.id);
    return 0;
}