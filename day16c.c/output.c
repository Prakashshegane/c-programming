#include<stdio.h>
int main()
{
    int a;//garbage value
    {
        int a=70;
    }
    {
        printf("%d",a);
    }
    return 0;
}