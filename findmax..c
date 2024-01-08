//find the largest element in array of intiger
#include <stdio.h>

int findLargest(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty or has invalid size.\n");
        return -1;
    }

    int largest = arr[0]; 

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i]; 
        }
    }

    return largest;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1; 
    }

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest = findLargest(arr, size);

    if (largest != -1) {
        printf("The largest element in the array is: %d\n", largest);
    }

    return 0;
}