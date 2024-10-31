#include <stdio.h>

void removeDuplicates(int *arr, int *size) {
    int temp[*size]; 
    int j = 0; 

    for (int i = 0; i < *size; i++) {
    
        int found = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                found = 1; 
                break;
            }
        }
        if (!found) {
            temp[j++] = arr[i];
        }
    }
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    *size = j;
}

int main() {
    int arr[100]; 
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &size);
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
