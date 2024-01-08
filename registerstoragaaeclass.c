//compiler error
#include<stdio.h>
int main()
{
    register int a=45;
    int *p;
    *p= & a;
    printf("%u\n",p);
}