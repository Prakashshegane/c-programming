#include<stdio.h>
int main()
{
    int a,c,b;
    printf("enter a three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
      if(a>c)
      {
        printf("%d is greater",a);
      }
      else
      {
        printf("%d is greatre",c);
      }
    else
    {
        printf("%d is greter",b);
    }
    }
