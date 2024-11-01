#include <stdio.h>
#include <string.h>

void reverseString(char *str, int index) {

    if (index == 0) {
        printf("%c", str[index]);
        return;
    }
    printf("%c", str[index]);
    reverseString(str, index - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = strlen(str);
    printf("Reversed string: ");
    reverseString(str, length - 1);
    printf("\n");

    return 0;
}
