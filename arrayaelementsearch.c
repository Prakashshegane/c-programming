#include<stdio.h>
int find_freq(int n,int a[],int x)
{
    int i,b=0;
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        b++;


        if(a[i]>x)
        break;
    }
    return b;
}
int main()
{
    int i,n,a[10],x;
    printf("enter the array size :\n");
    scanf("%d",&n);
    printf("enter the %d element \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter element to be searched :\n ");
    scanf("%d",&x);
    printf("frequency 0f %d is : %d",x,find_freq(n,a,x));
}