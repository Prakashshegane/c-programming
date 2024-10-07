#include<stdio.h>
int hcf(int x,int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            return hcf(x-y,y);
        }
        else{
            return hcf(x,y-x);
        }
    }
    return x;
}
int main()
{
    int a,b,c,d;
    printf("enter a number:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int result=(hcf(a,b),hcf(c,d));
    printf("the hcf is:%d",result);
}