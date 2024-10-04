#include<stdio.h>
int main()
{
    int n,c,r;
    printf("enter a ncr value:");
    scanf("%d%d",&n,&r);
    int nfact=1;
    for(int i=1;i<=n;i++)
    {
        nfact=nfact*i;
    }
    int rfact=1;
    for(int i=1;i<=r;i++)
    {
        rfact=rfact*i;
    }
    int nrfact=1;
    for(int i=1;i<=n-r;i++)
    {
        nrfact=nrfact*i;
    }
    int ncr=nfact/rfact*nrfact;
    printf("%d",ncr);
}