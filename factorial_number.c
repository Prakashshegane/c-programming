#include<stdio.h>
int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
int main()
{
    int n,res;
    printf("enter the n value :");
    scanf("%d",&n);
    res=fact(n);
    printf("%d",res);
}