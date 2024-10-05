#include<stdio.h>
int decrising(int n)
{
    if(n==0)
    {
        return 1;
    }
    printf("%d\n",n);
    return decrising(n-1);
}
int incrising(int n)
{
    if(n==1)
    {
        return 1;
    }
    incrising(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    decrising(n);
    incrising(n);

}