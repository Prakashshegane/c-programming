#include<stdio.h>
int main(){
    int x=10;
    printf("x before shifting %d\n",x);
    int z=x>>1;
    printf("x after shifting bit 1 is %d\n",z);
    return 0;
}