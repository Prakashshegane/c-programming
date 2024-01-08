#include <stdio.h>

int main() {
    int sum = 0 ,i = 1,n=5;
     do {
        sum += i;
        i++;
    } while (i <= n);

    printf("Sum of numbers from 1 to %d: %d\n", n, sum);

    return 0;
}

