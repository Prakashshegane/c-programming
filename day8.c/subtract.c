#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the size of row and column: ");
    scanf("%d%d", &row, &column);

    int arr1[row][column];
    int arr2[row][column];
    int arr3[row][column];
    printf("Enter the first array elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the second array elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j]; 
        }
    }
    printf("The subtraction array is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr3[i][j]); 
        }
        printf("\n"); 
    }

    return 0; 
}
