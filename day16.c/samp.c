#include<stdio.h>
int main()
{
    int i,a[4]={3,1,2,4},result;
    result=a[0];
    for(i=1;i<4;i++)
    {
        if(result<a[i])
        continue;
        result=a[i];
    }
    printf("%d",result);
}