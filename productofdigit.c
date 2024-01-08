//sum of digit
#include<Stdio.h>
int main(){
 int n,d,sum=0;
 printf("enter thhe number :");
 scanf("%d",&n);
 while(n>0)
 {
  d=n % 10;
  sum=sum+d;
  n=n/10;
 }
 printf("sum of digit %d",sum);
 return 0;
}