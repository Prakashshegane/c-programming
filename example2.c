#include<stdio.h>
int main()
{
    int i=0;
    for(;;)
    {
        if(i==0)
        break;
        printf("%d",++i);
    }
    return 0;
}