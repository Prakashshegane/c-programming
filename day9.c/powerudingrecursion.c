#include<stdio.h>
int power(int base,int pow)
{
    if(pow==0)
    {
        return 1;
    }
    return base*power(base,pow-1);
}
int main()
{
int base,pow,result;
printf("enter a base and power:");
scanf("%d%d",&base,&pow);
result=power(base,pow);
printf("the power of %d is:%d",base,result);
}