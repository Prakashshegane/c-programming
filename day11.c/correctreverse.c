#include <stdio.h>
#include <string.h>

int main() {
    char str[80];
    
    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;

    int n = strlen(str);
    
    // Reverse the string using a single loop
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    // Output the reversed string
    puts(str);

    return 0;
}
