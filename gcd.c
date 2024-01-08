#include<stdio.h>
int find_gcd(int x,int y)
{
    int i,res,min;
    min=x<y?x:y;
    for(i=1;i<=min;i++)
    {
        if(x%i==0 &&y%i==0)
        res=i;
    }
    return res;
}
int main()
{
    int x,y;
    printf("enter the x and Y values:\n");
    scanf("%d%d",&x,&y);
    int res;
    res=find_gcd(x,y);
    printf("%d",res);
}