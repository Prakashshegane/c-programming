#include<stdio.h>
#include<math.h>
void hcf(int a, int b)
{ 
    int max,min;
    if(a<b)
    {
       min=a;
       printf("the minimum number is:%d\n",min);
    }
    else{
        min=b;
        printf("the minimum number is :%d\n",min);
    }
       for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i == 0)
        {
        max=i;
        }
    }
    printf("hcf is :%d\n",max);
    return;
}
int main()
{  
    int a,b;
    printf("eter the value of a and b:");
    scanf("%d%d",&a,&b);
    hcf(a,b);
}