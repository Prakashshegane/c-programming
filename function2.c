#include<stdio.h>
int find_max(int,int);
int main()
{
    int x=17,y=22;
    printf("maximum is :%d\n",find_max(x,y));
}
int find_max(int x,int y)
{
    int max;
    if(x>y)
    max=x;
    else
    max=y;
     return(max);
}
