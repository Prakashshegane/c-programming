#include<stdio.h>
int main()
{
    int a=20;
    {
        int a=44;
        printf("%d\n",a);
    }
    printf("%d",a);
    return 0;
}