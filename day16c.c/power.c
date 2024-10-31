#include<stdio.h>
void exp(int base,int power)
{
    int res=1;
    for(int i=0;i<power;i++)
        {
         res=res*base;
        }
    
    printf("%d",res);
}
int main()
{
    int base,power;
    printf("enter a base:");
    scanf("%d",&base);
    printf("enter a power:");
    scanf("%d",&power);
    exp(base,power);
}