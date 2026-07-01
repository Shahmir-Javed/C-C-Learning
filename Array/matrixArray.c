#include <stdio.h>

int main()
{
    int row;
    int col;
    const int maxRow = 3;
    const int maxCol = 3;
    int matrix[maxRow][maxCol];

    // for (row = 0; row < maxRow; row++)
    // {
    //     for (col = 0; col < maxCol; col++)
    //     {
    //         printf("Enter value for matrix[%d][%d]: ", row, col);
    //         scanf("%d", &matrix[row][col]);
    //     }
    // }
    
    printf("The matrix is: ",matrix[row][col]);
    for (row = 0; row < maxRow; row++)
    {
        for (col = 0; col < maxCol; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    // Revirse the matrix
    printf("The reversed matrix is:\n");
    for (row = maxRow - 1; row >= 0; row--)
    {
        for (col = 0; col < maxCol; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}