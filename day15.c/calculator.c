#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,sum,sub;
    float mul,div;
    char ch;
    printf("enter a number : ");
    scanf("%c",&ch);
    printf("enter the a and b value:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case '+': //add
        sum=a+b;
        printf("%d",sum);
        break;
        case '*': //mul
        mul=a*b;
        printf("%f",mul);
        break;
        case '-':  //sub
        sub=a-b;
        printf("%d",sub);
        break;
        case '/': //divid
        div=(a/b);
        printf("%f",div);
        break;
        default:
        printf("invalid operater");
    }
}