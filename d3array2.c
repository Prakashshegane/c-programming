#include <stdio.h>

int main() {
    int x, y, z;

    // User input for array dimensions
    printf("Enter the dimensions of the 3D array (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    // Runtime initialization of a 3D array
    int array[x][y][z];

    // User input for array elements
    printf("Enter elements of the 3D array:\n");
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                                printf("Enter element array[%d][%d][%d]: ", i, j, k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    // Displaying the 3D array
    printf("\n3D Array:\n");
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                printf("%d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}