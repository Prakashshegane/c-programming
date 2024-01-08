#include<stdio.h>
int main(){
    int n, num;
    printf("enter a number n: ");
    scanf("%d",&n);
    //num=n%2?printf("odd"):printf("even");
    n%2?printf("odd"):printf("even");
    //printf("%d",num);
    return 0;
}