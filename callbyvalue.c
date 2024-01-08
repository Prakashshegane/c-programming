//swaping of two number using function
#include<stdio.h>
void find_swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x=4,y=6;
    printf("before swap() :x=%d y=%d\n",x,y);
    find_swap(&x,&y);
    printf("after swaping():x=%d y=%d\n",x,y);
    return 0;
}
