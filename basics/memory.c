#include <stdio.h>
#include <stdlib.h>  // For malloc(), free()

int main() {
    int *arr;  // Pointer to int
    int n = 5;

    // Dynamically allocate memory for an array of 5 integers
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit if memory allocation fails
    }

    // Assign values to the dynamically allocated memory
    for (int i = 0; i < n; i++) {
        arr[i] = i * 10;
    }

    // Print values
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Free the allocated memory
    free(arr);
    return 0;
}
