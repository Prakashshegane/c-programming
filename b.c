#include<stdio.h>
int main()
{
    int  a=9,b=9;
    a=b++;
    b=a++;
    b=++b;
    printf("%d%d",a,b);
    return 0;
}