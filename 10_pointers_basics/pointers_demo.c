/*
 * Topic: Pointers Basics
 *
 * This program demonstrates:
 * - Pointer declaration
 * - Address-of operator (&)
 * - Dereference operator (*)
 * - Pointers and arrays
 * - Pass by reference using pointers
 * - Pointer arithmetic
 */

#include <stdio.h>

// Function prototypes
void swap(int *a, int *b);
void modify_value(int *ptr);
int find_max(int *arr, int size);

int main() {
    printf("=== Pointers Basics Demo ===\n\n");

    // ========================================
    // POINTER BASICS
    // ========================================
    printf("=== Pointer Declaration and Basics ===\n");

    int num = 42;
    int *ptr;  // Pointer to an integer

    ptr = &num;  // Store address of num in ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address it holds): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n\n", *ptr);

    // ========================================
    // DEREFERENCING POINTERS
    // ========================================
    printf("=== Dereferencing Pointers ===\n");

    printf("Original value: %d\n", num);

    *ptr = 100;  // Change the value at the address ptr points to

    printf("After *ptr = 100\n");
    printf("Value of num: %d\n", num);
    printf("Value of *ptr: %d\n\n", *ptr);

    // ========================================
    // POINTER SIZES
    // ========================================
    printf("=== Pointer Sizes ===\n");

    int *int_ptr;
    float *float_ptr;
    double *double_ptr;
    char *char_ptr;

    printf("Size of int pointer:    %ld bytes\n", sizeof(int_ptr));
    printf("Size of float pointer:  %ld bytes\n", sizeof(float_ptr));
    printf("Size of double pointer: %ld bytes\n", sizeof(double_ptr));
    printf("Size of char pointer:   %ld bytes\n", sizeof(char_ptr));
    printf("(All pointers are the same size!)\n\n");

    // ========================================
    // PASS BY REFERENCE: Swap Function
    // ========================================
    printf("=== Pass by Reference (Swap Function) ===\n");

    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // Pass addresses
    printf("After swap:  x = %d, y = %d\n\n", x, y);

    // ========================================
    // MODIFYING VALUES THROUGH POINTERS
    // ========================================
    printf("=== Modifying Values Through Pointers ===\n");

    int value = 50;
    printf("Before: value = %d\n", value);

    modify_value(&value);

    printf("After:  value = %d\n\n", value);

    // ========================================
    // POINTERS AND ARRAYS
    // ========================================
    printf("=== Pointers and Arrays ===\n");

    int arr[5] = {10, 20, 30, 40, 50};
    int *arr_ptr = arr;  // Array name is a pointer to first element

    printf("Array elements using array notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nArray elements using pointer notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(arr_ptr + %d) = %d\n", i, *(arr_ptr + i));
    }

    printf("\nArray addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("&arr[%d] = %p\n", i, (void*)&arr[i]);
    }
    printf("\n");

    // ========================================
    // POINTER ARITHMETIC
    // ========================================
    printf("=== Pointer Arithmetic ===\n");

    int numbers[5] = {100, 200, 300, 400, 500};
    int *p = numbers;

    printf("p points to: %d (at address %p)\n", *p, (void*)p);

    p++;  // Move to next integer
    printf("After p++: %d (at address %p)\n", *p, (void*)p);

    p += 2;  // Move forward 2 integers
    printf("After p+=2: %d (at address %p)\n", *p, (void*)p);

    p--;  // Move back one integer
    printf("After p--: %d (at address %p)\n\n", *p, (void*)p);

    // ========================================
    // USING POINTERS WITH FUNCTIONS
    // ========================================
    printf("=== Finding Maximum with Pointers ===\n");

    int scores[5] = {85, 92, 78, 95, 88};

    printf("Scores: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }

    int max = find_max(scores, 5);
    printf("\nMaximum score: %d\n\n", max);

    // ========================================
    // NULL POINTERS
    // ========================================
    printf("=== NULL Pointers ===\n");

    int *null_ptr = NULL;  // Pointer that points to nothing

    printf("null_ptr value: %p\n", (void*)null_ptr);

    // Always check before dereferencing!
    if (null_ptr != NULL) {
        printf("Value: %d\n", *null_ptr);
    } else {
        printf("Pointer is NULL - cannot dereference!\n");
    }
    printf("\n");

    // ========================================
    // PRACTICAL EXAMPLE: Array Manipulation
    // ========================================
    printf("=== Array Manipulation with Pointers ===\n");

    int data[5] = {1, 2, 3, 4, 5};

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // Double each element using pointers
    int *ptr_data = data;
    for (int i = 0; i < 5; i++) {
        *(ptr_data + i) *= 2;
    }

    printf("After doubling: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", data[i]);
    }
    printf("\n\n");

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("=== Quiz Time! ===\n");

    // Quiz 1: What does this print?
    // int a = 10;
    // int *p = &a;
    // *p = 20;
    // printf("%d", a);
    // Answer: ___

    // Quiz 2: Declare a pointer to a float variable
    // YOUR CODE HERE:
    // float f = 3.14;
    // float *___ = ___;

    // Quiz 3: What's wrong with this code?
    // int *ptr;
    // *ptr = 10;
    // Answer: ___________ (hint: where does ptr point?)

    // Quiz 4: Write a function to increment a value by 1 using pointers
    // void increment(int *___) {
    //     ___++;
    // }

    // Quiz 5: What's the relationship between arrays and pointers?
    // Answer: ___________

    printf("Complete the quiz sections above!\n");

    return 0;
}

// ========================================
// FUNCTION DEFINITIONS
// ========================================

// Swap two integers using pointers (pass by reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Modify a value through a pointer
void modify_value(int *ptr) {
    *ptr = *ptr * 2;
}

// Find maximum in array using pointer
int find_max(int *arr, int size) {
    int max = *arr;  // First element

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}
