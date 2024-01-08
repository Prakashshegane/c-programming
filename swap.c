#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped numbers
    printf("Swapped numbers: %d %d\n", a, b);

    return 0;
}
