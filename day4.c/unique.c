#include<stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 1, 2, 3, 5};
    int isUnique;

    for(int i = 0; i < 7; i++) {
        isUnique = 1;  // Assume the element is unique
        for(int j = 0; j < 7; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;  // Element is not unique
                break;
            }
        }
        if(isUnique) {
            printf("%d is unique\n", arr[i]);
        }
    }

    return 0;
}
