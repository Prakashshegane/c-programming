//largest in aarray 
#include <stdio.h>

int findLargest(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty or has invalid size.\n");
        return -1; // Return an error code or specific value indicating failure
    }

    int largest = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update the largest element
        }
    }

    return largest;
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1; // Return an error code
    }

    int arr[size];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find and display the largest element
    int largest = findLargest(arr, size);

    if (largest != -1) {
        printf("The largest element in the array is: %d\n", largest);
    }

    return 0;
}