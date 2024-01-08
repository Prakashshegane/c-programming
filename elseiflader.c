#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three number :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    printf("the a number is greatest %d",a);
    else if(b>c)
    printf("the b number is greatest %d",b);
    else 
    printf("the c number is greatest %d",c);
    return 0;
}