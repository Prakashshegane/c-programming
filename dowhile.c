#include<stdio.h>
int main()
{
    int a=0;
    do{
        --a;
        printf("%d",a);
        a++;
    }
    while(a>=0);
    return 0;
}