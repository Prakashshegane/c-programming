#include<stdio.h>
int fibo(int n) {
    if(n == 0) return 0; 
    if(n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2); 
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("The Fibonacci number is: %d\n",fibo(n));
    return 0;
}
