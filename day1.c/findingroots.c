#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    int a, b, c, total;
    float root1, root2, imaginary, realPart;
    
    // Input the coefficients a, b, and c
    printf("Enter the values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Calculate the discriminant
    total = b*b - 4*a*c;
    
    if (total > 0) {
        // Roots are real and distinct
        root1 = (-b + sqrt(total)) / (2 * a);
        root2 = (-b - sqrt(total)) / (2 * a);
        printf("%.2f is the first root of the expression\n", root1);
        printf("%.2f is the second root of the expression\n", root2);
    }
    else if (total == 0) {
        // Roots are real and equal
        root1 = root2 = -b / (2 * a);
        printf("%.2f is the real and equal root of the expression\n", root1);
    }
    else {
        // Roots are complex
        realPart = -b / (2.0 * a);
        imaginary = sqrt(-total) / (2 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginary, realPart, imaginary);
    }
    
    return 0;
}
