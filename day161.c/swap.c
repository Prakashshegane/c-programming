#include<stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n1=10,n2=20;
    printf("before swaping n1=%d,n2=%d",n1,n2);
    printf("\n");
    swap(&n1,&n2);
    printf("after swaping n1=%d,n2=%d",n1,n2);
}