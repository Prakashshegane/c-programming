//sum n numbers using recursion 
#include<stdio.h>
int sumofNum(int n)
{
  if(n==1)
  return 1;
  else
  return(n+sumofNum(n-1));
}
int main()
{
    int res,n;
    printf("enter the number : ");
    scanf("%d\n",&n);
    res=sumofNum(n);
    printf("sum of num of number is %d",res);
}