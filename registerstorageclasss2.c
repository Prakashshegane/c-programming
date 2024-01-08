//compiler error because scanf is does not needed it stored inn cpu
#include<stdio.h>
int main()
{
    register int a,b;
    printf("%d%d",a,b);
    scanf("%d%d",&a,&b);
}