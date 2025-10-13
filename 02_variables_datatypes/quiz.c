/*
 * Quiz: Variables and Data Types in C
 * Instructions: Fill in the blanks to make the code work as described.
 */
#include <stdio.h>

int main() {
    // 1. Declare an integer variable named 'age' and assign it the value 20
    int age = /* TODO: assign a value */;
    printf("Age: %d\n", age); // Should print 20

    // 2. Declare a float variable named 'height' and assign it the value 1.75
    float height = /* TODO: assign a value */;
    printf("Height: %.2f\n", height); // Should print 1.75

    // 3. Fill in the condition to check if age is greater than 18
    if (/* TODO: write a condition to check if age is greater than 18 */) {
        printf("Adult\n");
    } else {
        printf("Minor\n");
    }
    return 0;
}
