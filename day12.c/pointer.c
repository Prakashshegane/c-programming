#include<stdio.h>
typedef int* pointer;
int main()
{
    int x=5,y=5;
    //int y=5;
    //int *a=&x;
    //int *b=&y;
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p",b);
}