#include<stdio.h>
int incrising(int n)
{
    if(n==1)
    {
        return 1;
    }
   int sum=n-incrising(n-1);
   printf("%d",sum);

}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    incrising(n);
}