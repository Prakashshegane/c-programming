#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
   if( (N > 0) && (N & (N - 1)) == 0)
   {
    printf("%d is a number that can be expressed as power of 2.",N);
   }
   else
   {
    printf("%d cannot be expressed as power of 2.",N);
   }
}