#include<stdio.h>
int main()
{
    int i=1,fact=1;
    while(1)
    {
    fact=fact*i;
    i++;
    if(i<=5)
      continue;
    break;
    }
    
    printf("%d",fact);
}