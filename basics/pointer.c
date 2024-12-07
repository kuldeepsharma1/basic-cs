#include <stdio.h>

int main() {
    // 1. Basic Pointer Example
    int num = 10;
    int *ptr = &num;  // Pointer ptr holds the address of num

    printf("Basic Pointer Example:\n");
    printf("Value of num: %d\n", num);        // Value of num
    printf("Address of num: %p\n", &num);     // Address of num
    printf("Pointer ptr holds address: %p\n", ptr);  // Address stored in ptr
    printf("Dereferenced value using ptr: %d\n", *ptr);  // Dereferencing ptr to get value
    printf("\n");

    // 2. Pointer Arithmetic Example with Array
    int arr[] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;  // Pointer to the first element of the array

    printf("Pointer Arithmetic Example with Array:\n");
    printf("Array elements using pointer arithmetic:\n");

    // Using pointer arithmetic to access elements
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(arrPtr + i));  // Dereferencing using pointer arithmetic
    }

    printf("\n");

    // 3. Pointer Arithmetic: Modifying Array Elements
    printf("Modifying array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        *(arrPtr + i) += 10;  // Add 10 to each element using pointer arithmetic
    }

    // Printing the modified array
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(arrPtr + i));  // Print modified elements
    }

    printf("\n");

    // 4. Pointer to Pointer (Double Pointer)
    int **ptrPtr = &ptr;  // Pointer to pointer
    printf("Pointer to Pointer Example:\n");
    printf("Value of num using pointer to pointer: %d\n", **ptrPtr);  // Dereferencing twice
    printf("\n");

    // 5. Pointer Increment and Array Traversal
    printf("Pointer increment and array traversal:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value at arr[%d]: %d\n", i, *arrPtr);
        arrPtr++;  // Move to the next element in the array
    }

    return 0;
}
