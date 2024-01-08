#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
int main()
{
    int n,res;
    printf("enter any value :\n");
    scanf("%d",&n);
    res=fact(n);
    printf("factorial result %d :\n",res);
}
