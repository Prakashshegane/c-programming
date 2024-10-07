#include<stdio.h>
void decimal(int dec)
{
    if(dec==0)
    {
        return;
    }
    decimal(dec/2);
    printf("%d",dec%2);
}
int main()
{
int dec;
printf("enter a any decimal number:");
scanf("%d",&dec);
decimal(dec);
}