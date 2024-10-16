#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a =sizeof(_Bool);
    printf("%d\n",a);
    int b=sizeof(float);
    printf("%d\n",b);
    int c=sizeof(bool);
    printf("%d",c);
    return 0;
}