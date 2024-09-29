#include<stdio.h>
int main()
{
    int i,marks[5]={44,33,44,5,6 };
    for(i=0;i<5;i++)
    {
        if(marks[i]<35)
        {
            printf("%d\n",i);
        }
    }
}