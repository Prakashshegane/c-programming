#include <stdio.h>

void findFrequency(int arr[], int size) {
    int visited[size];
    for (int i = 0; i < size; ++i) {
        visited[i] = 0;
    }
    for (int i = 0; i < size; ++i) {
        if (visited[i] == 1) {
            continue;
        }

        int count = 1; 
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                visited[j] = 1; 
                count++;
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }
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
    printf("\nFrequency of each element:\n");
    findFrequency(arr, size);

    return 0;
}