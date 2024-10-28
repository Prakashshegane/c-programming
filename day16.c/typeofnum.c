#include<stdio.h>
int main()
{
    int num;
    printf("ener a number:");
    scanf("%d",&num);
    if(num>0)
    printf("%d is poositive number",num);
    else if(num<0)
    printf("%d is negative number",num);
    else
    printf("%d is zero number",num);
}