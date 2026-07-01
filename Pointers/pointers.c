#include <stdio.h>

int main()
{
    // int *ptr;
    // int num = 10;
    // ptr = &num;
    // printf("Value of num: %d\n", num);
    // printf("Address of num: %p\n", &num);
    // printf("Value of ptr: %p\n", ptr);
    // printf("Value of *ptr: %d\n", *ptr);
    
// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int *ptrArray;
    // ptrArray = array;
    // printf("Value of ptrArray: %p\n", ptrArray);
    // // ptrArray++;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Value at ptrArray[%d]: %d\n", i, *ptrArray);
    //     ptrArray++;
    // }
    // return 0;

    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr1, *ptr2;
    ptr1 = &array[5];
    ptr2 = &array[9];

    // subtract ptr1 from ptr2 to find the number of elements between them
    printf("Difference between ptr2 and ptr1: %d\n", ptr2 - ptr1);
    return 0;

}