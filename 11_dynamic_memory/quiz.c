/*
 * Quiz: Dynamic Memory in C
 * Instructions: Fill in the blanks to make the code work as described.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Allocate memory for an array of 5 integers
    int *arr = /* TODO: use malloc to allocate memory */;
    // 2. Assign values to the array
    for (int i = 0; i < 5; i++) {
        arr[i] = /* TODO: assign a value */;
    }
    // 3. Print the values
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // 4. Free the memory
    /* TODO: free the allocated memory */
    return 0;
}
