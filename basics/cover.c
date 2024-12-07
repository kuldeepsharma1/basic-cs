#include <stdio.h>
#include <stdlib.h>  
#include <string.h>  

// Function prototypes
void demonstrateControlStructures();
void demonstrateArrays();
void demonstratePointers();
void demonstrateMemoryManagement();
void demonstrateFunctions();
void demonstrateStructuresAndUnions();
void demonstrateFileIO();
int factorial(int n);  // Function prototype for factorial

// Global variable to error handling demo
int errorFlag = 0;

int main() {
    printf("C Programming - Basic to Intermediate Concepts\n\n");

    // 1. Basic Input and Output
    char name[50];
    printf("Enter your name: ");
    // Reading input including spaces not using scanf because of name contain spaces
    fgets(name, sizeof(name), stdin);  
    name[strcspn(name, "\n")] = '\0'; // Remove newline character from input
    printf("Hello, %s!\n\n", name);

    // 2. Variables and Data Types
    int num = 10;
    float pi = 3.14f;
    double largeNumber = 12345.6789;
    char grade = 'A';

    printf("Integer: %d, Float: %.2f, Double: %.4f, Char: %c\n\n", num, pi, largeNumber, grade);

    // 3. Control Structures (if-else, switch-case, loops, break, continue)
    demonstrateControlStructures();

    // 4. Arrays (Single and Multi-dimensional)
    demonstrateArrays();

    // 5. Pointers and Pointer Arithmetic
    demonstratePointers();

    // 6. Memory Management (Dynamic memory allocation and deallocation)
    demonstrateMemoryManagement();

    // 7. Functions (Recursive function demonstration)
    demonstrateFunctions();

    // 8. Structures and Unions
    demonstrateStructuresAndUnions();

    // 9. File I/O operations
    demonstrateFileIO();

    // 10. Error Handling (simple error flag)
    if (errorFlag) {
        printf("An error occurred during the program execution.\n");
    } else {
        printf("Program executed successfully.\n");
    }

    return 0;
}

void demonstrateControlStructures() {
    // If-Else Example
    printf("Control Structures Demonstration:\n");
    int num = 5;
    if (num > 0) {
        printf("Positive number.\n");
    } else if (num == 0) {
        printf("Zero.\n");
    } else {
        printf("Negative number.\n");
    }

    // Switch-Case Example
    int day = 3;
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day\n");
    }

    // For Loop Example
    printf("For loop output: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While Loop Example
    int i = 1;
    printf("While loop output: ");
    while (i <= 5) {
        printf("%d ", i++);
    }
    printf("\n");

    // Do-While Loop Example
    printf("Do-While loop output: ");
    i = 1;
    do {
        printf("%d ", i++);
    } while (i <= 5);
    printf("\n");

    // Break Example
    printf("Using break to exit loop when i == 3: ");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    // Continue Example
    printf("Using continue to skip when i == 3: ");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n\n");
}

void demonstrateArrays() {
    // Single-dimensional array
    int arr[] = {1, 2, 3, 4, 5};
    printf("Single-dimensional array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Multi-dimensional array (2D)
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("2D Array elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("mat[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }
    printf("\n");
}

void demonstratePointers() {
    int num = 10;
    int *ptr = &num;
    printf("Pointer Example:\n");
    printf("Value of num: %d, Address of num: %p, Value pointed to by ptr: %d\n", num, &num, *ptr);

    // Pointer Arithmetic (Accessing array elements)
    int arr[] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(arrPtr + i));
    }
    printf("\n");
}

void demonstrateMemoryManagement() {
    int *ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Dynamically allocated memory:\n");
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Freeing memory
    free(ptr);
    printf("Memory freed.\n\n");
}

void demonstrateFunctions() {
    printf("Function Demonstration - Factorial Calculation (Recursion):\n");

    int result = factorial(5);
    printf("Factorial of 5: %d\n\n", result);
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void demonstrateStructuresAndUnions() {
    // Structure Example
    struct Point {
        int x;
        int y;
    };
    struct Point p1 = {1, 2};
    printf("Structure Example:\n");
    printf("Point p1: (%d, %d)\n", p1.x, p1.y);

    // Union Example
    union Data {
        int i;
        float f;
        char str[20];
    };
    union Data data;
    data.i = 10;
    printf("Union Example (i = %d):\n", data.i);
    data.f = 3.14;
    printf("Union Example (f = %.2f):\n", data.f);
    strcpy(data.str, "Hello, Union!");
    printf("Union Example (str = %s):\n", data.str);
    printf("\n");
}

void demonstrateFileIO() {
    FILE *fptr;
    fptr = fopen("example.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        errorFlag = 1;
        return;
    }

    fprintf(fptr, "Hello, File I/O!\n");
    fclose(fptr);

    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        errorFlag = 1;
        return;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fptr)) {
        printf("File content: %s", buffer);
    }
    fclose(fptr);
    printf("\n");
}
