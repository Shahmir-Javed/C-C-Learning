#include <stdio.h>

int main() {
    // A 3x4 matrix
    int matrix[3][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12}
    };

    // Let's target the value '7', which is at row 1, column 2.
    int r = 1;
    int c = 2;

    printf("Using array syntax:   matrix[%d][%d] = %d\n", r, c, matrix[r][c]);
    printf("Using pointer syntax: *(*(matrix + %d) + %d) = %d\n", r, c, *(*(matrix + r) + c));

    printf("\n--- Memory Addresses ---\n");
    // Notice how the row pointer jumps by 16 bytes (4 ints * 4 bytes)
    printf("Address of Row 0: %p\n", (void*)matrix);
    printf("Address of Row 1: %p\n", (void*)(matrix + 1));
    
    // Notice how the column pointer jumps by 4 bytes (1 int * 4 bytes)
    printf("Address of matrix[1][0]: %p\n", (void*)(*(matrix + 1)));
    printf("Address of matrix[1][1]: %p\n", (void*)(*(matrix + 1) + 1));

    return 0;
}