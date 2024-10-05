#include<stdio.h>
int power(int a,int b)
{
   int add;
   if(b==0)
   {
    return 1;
   }
   add= a * powera(a,b-1);
   return add;
}
int main()
{
    int a,b,x;
    printf("enter a base:");
    scanf("%d",&a);
    printf("enter a power:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
}