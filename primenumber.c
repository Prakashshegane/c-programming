#include<stdio.h>
int isprime(int num)
{
  if(num <= 1)
  {
    return 0;
  }
  for(int i =2;i*i <=num; i++)
  {
    if(num %i==0)
    {
        return 0;
    }
  }
  return 1;
}
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    if(isprime(num))
    {
    printf("it is a prime number %d\n",num);
    }
    else
    {
    printf("it is a not a prime number %d\n",num);
    }
  return 0;
}