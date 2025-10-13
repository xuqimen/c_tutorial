/*
 * Quiz: Pointers in C
 * Instructions: Fill in the blanks to make the code work as described.
 * These exercises will help you understand why and how pointers are used in C.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. Wrong swap function (does not use pointers, fails to swap values)
void wrong_swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 2. TODO: Write a correct swap function using pointers
// void swap(/* TODO: function parameters */) {
//     // TODO: swap the values pointed to by the parameters
// }

// 3. TODO: Write a function that sets an integer value to zero using a pointer
// void set_to_zero(/* TODO: function parameters */) {
//     // TODO: set the pointed value to zero
// }

// 4. TODO: Write a function that fills an array of integers with a given value using pointers
// void fill_array(/* TODO: function parameters */) {
//     // TODO: fill the array using pointer arithmetic
// }

int main() {
    // Demonstrate wrong swap
    int x = 1, y = 2;
    printf("Before wrong_swap: x = %d, y = %d\n", x, y);
    wrong_swap(x, y);
    printf("After wrong_swap: x = %d, y = %d\n", x, y); // Should still print x = 1, y = 2

    // TODO: Demonstrate correct swap
    // printf("Before swap: x = %d, y = %d\n", x, y);
    // swap();
    // printf("After swap: x = %d, y = %d\n", x, y); // Should print x = 2, y = 1

    // TODO: Use set_to_zero to set y to zero
    // set_to_zero(&y);
    // printf("y after set_to_zero: %d\n", y); // Should print 0

    // TODO: Fill an array with a value using pointers
    // int arr[5];
    // fill_array(arr, 5, 7);
    // printf("Array after fill_array: ");
    // for (int i = 0; i < 5; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    // TODO: Demonstrate pointer to string (char array)
    // char str[20] = "Hello";
    // char *p = str;
    // printf("First character: %c\n", *p); // Should print 'H'
    // printf("String: %s\n", p); // Should print 'Hello'

    // TODO: Demonstrate dynamic memory allocation and pointer usage
    // int *dyn_arr = malloc(3 * sizeof(int));
    // fill_array(dyn_arr, 3, 42);
    // printf("Dynamically allocated array: ");
    // for (int i = 0; i < 3; i++) {
    //     printf("%d ", dyn_arr[i]);
    // }
    // printf("\n");
    // free(dyn_arr);

    return 0;
}
