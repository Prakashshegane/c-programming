//revising a number
#include<Stdio.h>
int main(){
 int n,d,reversed=0;
 printf("enter thhe number :");
 scanf("%d",&n);
 while(n>0)
 {
  d=n % 10;
  reversed=reversed * 10 +d;
  n=n/10;
 }
 printf("reversed number is %d",reversed);
 return 0;
}