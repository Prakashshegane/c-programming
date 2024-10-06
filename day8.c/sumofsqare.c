#include<stdio.h>
int sum(int a)
{
    int num=0;
    if(a==0)
    {
        return 1;
    }
    num=a*a;
    return(num);

}
int main()
{
    int a,b,sqare;
    printf("enter the a and b value:");
    scanf("%d%d",&a,&b);
    sqare=sum(a)+sum(b);
    printf("the sum of sqare is:%d",sqare);
}