#include <stdio.h>

int main() {
    int a[10], i, largest;

    // Input 10 numbers into the array
    for(i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }

    // Initialize 'largest' with the first element of the array
    largest = a[0];

    // Iterate through the array to find the largest number
    for(i = 1; i < 10; i++) {
        if(a[i] > largest) {
            largest = a[i];  // Update largest if a[i] is greater
        }
    }

    // Output the largest number
    printf("%d is the largest number\n", largest);

    return 0;
}
