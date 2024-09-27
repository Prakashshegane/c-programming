#include<stdio.h>
int main()
{
int N;
scanf("%d", &N); /*The value of N is taken as input from the test case */
int i,j;
for(i=0; i<N; i++)
  {
  for(j=0;j<=N-i;j++)
    {
    printf("*");
    }
  printf("\n");
  } 
}