/*
 * Topic: Dynamic Memory Allocation
 *
 * This program demonstrates:
 * - malloc() - allocating memory
 * - calloc() - allocating and initializing memory
 * - realloc() - resizing allocated memory
 * - free() - deallocating memory
 * - Memory leaks and best practices
 * - Dynamic arrays
 */

#include <stdio.h>
#include <stdlib.h>  // For malloc, calloc, realloc, free
#include <string.h>  // For strcpy

int main() {
    printf("=== Dynamic Memory Allocation Demo ===\n\n");

    // ========================================
    // MALLOC - Memory Allocation
    // ========================================
    printf("=== malloc() - Allocate Memory ===\n");

    // Allocate memory for 5 integers
    int *numbers = (int *)malloc(5 * sizeof(int));

    // Always check if allocation succeeded
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Memory allocated for 5 integers\n");

    // Initialize the allocated memory
    for (int i = 0; i < 5; i++) {
        numbers[i] = (i + 1) * 10;
    }

    printf("Values: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    // Free the memory when done
    free(numbers);
    printf("Memory freed\n\n");

    // ========================================
    // CALLOC - Contiguous Allocation
    // ========================================
    printf("=== calloc() - Allocate and Initialize ===\n");

    // calloc initializes memory to zero
    int *zeros = (int *)calloc(5, sizeof(int));

    if (zeros == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Allocated memory initialized to zero:\n");
    for (int i = 0; i < 5; i++) {
        printf("zeros[%d] = %d\n", i, zeros[i]);
    }
    printf("\n");

    free(zeros);

    // ========================================
    // DYNAMIC ARRAY INPUT
    // ========================================
    printf("=== Dynamic Array with User Input ===\n");

    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    // Allocate array of size n
    int *user_array = (int *)malloc(n * sizeof(int));

    if (user_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &user_array[i]);
    }

    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += user_array[i];
    }

    printf("\nYou entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", user_array[i]);
    }
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n\n", (float)sum / n);

    free(user_array);

    // ========================================
    // REALLOC - Resizing Memory
    // ========================================
    printf("=== realloc() - Resize Memory ===\n");

    // Start with array of 3 integers
    int *arr = (int *)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("Original array (3 elements): ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize to hold 5 integers
    int *temp = (int *)realloc(arr, 5 * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(arr);  // Free original memory
        return 1;
    }

    arr = temp;  // Update pointer

    // Add new elements
    arr[3] = 40;
    arr[4] = 50;

    printf("Resized array (5 elements): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    free(arr);

    // ========================================
    // DYNAMIC STRINGS
    // ========================================
    printf("=== Dynamic Strings ===\n");

    char temp_input[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", temp_input);  // Read string with spaces

    // Allocate exact amount needed
    char *dynamic_string = (char *)malloc((strlen(temp_input) + 1) * sizeof(char));

    if (dynamic_string == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    strcpy(dynamic_string, temp_input);

    printf("You entered: %s\n", dynamic_string);
    printf("String length: %ld\n", strlen(dynamic_string));
    printf("Memory allocated: %ld bytes\n\n", strlen(dynamic_string) + 1);

    free(dynamic_string);

    // ========================================
    // 2D DYNAMIC ARRAY
    // ========================================
    printf("=== 2D Dynamic Array ===\n");

    int rows = 3, cols = 4;

    // Allocate array of pointers (rows)
    int **matrix = (int **)malloc(rows * sizeof(int *));

    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Allocate each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed!\n");
            // Free previously allocated rows
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return 1;
        }
    }

    // Initialize matrix
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }

    printf("3x4 Dynamic Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Free 2D array (reverse order)
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    // ========================================
    // MEMORY LEAK EXAMPLE
    // ========================================
    printf("=== Memory Leak Warning ===\n");
    printf("Bad practice:\n");
    printf("  int *ptr = malloc(10 * sizeof(int));\n");
    printf("  ptr = NULL;  // Lost reference without free()!\n");
    printf("\nGood practice:\n");
    printf("  int *ptr = malloc(10 * sizeof(int));\n");
    printf("  // Use the memory\n");
    printf("  free(ptr);  // Always free!\n");
    printf("  ptr = NULL; // Good practice to avoid dangling pointer\n\n");

    // ========================================
    // PRACTICAL EXAMPLE: Growing List
    // ========================================
    printf("=== Practical Example: Growing List ===\n");

    int capacity = 2;
    int size = 0;
    int *list = (int *)malloc(capacity * sizeof(int));

    if (list == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter numbers (0 to stop):\n");

    while (1) {
        int input;
        printf("Number: ");
        scanf("%d", &input);

        if (input == 0) break;

        // Check if we need to grow the array
        if (size >= capacity) {
            capacity *= 2;  // Double the capacity
            int *new_list = (int *)realloc(list, capacity * sizeof(int));

            if (new_list == NULL) {
                printf("Memory reallocation failed!\n");
                free(list);
                return 1;
            }

            list = new_list;
            printf("(Array resized to capacity: %d)\n", capacity);
        }

        list[size++] = input;
    }

    printf("\nYour list: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\nTotal elements: %d\n", size);
    printf("Final capacity: %d\n\n", capacity);

    free(list);

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("=== Quiz Time! ===\n");

    // Quiz 1: Allocate memory for 10 floats
    // YOUR CODE HERE:
    // float *arr = (float *)malloc(___ * sizeof(___));

    // Quiz 2: What's wrong with this code?
    // int *p = (int *)malloc(5 * sizeof(int));
    // // Use p...
    // // Program ends without free()
    // Answer: ___________

    // Quiz 3: Difference between malloc and calloc?
    // Answer: ___________

    // Quiz 4: Always check if pointer is ___ after allocation
    // Answer: ___________

    // Quiz 5: Complete the proper cleanup
    // int *data = (int *)malloc(100 * sizeof(int));
    // // Use data...
    // YOUR CODE HERE:
    // _____(data);
    // data = _____;  // Optional but good practice

    printf("Complete the quiz sections above!\n");

    printf("\n=== Key Takeaways ===\n");
    printf("1. Always check if allocation succeeded (check for NULL)\n");
    printf("2. Always free() allocated memory when done\n");
    printf("3. malloc() doesn't initialize, calloc() initializes to zero\n");
    printf("4. Use realloc() to resize allocated memory\n");
    printf("5. Set pointer to NULL after free() to avoid dangling pointers\n");

    return 0;
}
