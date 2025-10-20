/*
 * Quiz: Variables and Data Types in C
 * Instructions: Fill in the blanks to make the code work as described.
 */
#include <stdio.h>

int main() {
    // 1. Declare an integer variable named 'age' and assign it the value 20
    int age = /* TODO: assign a value */;
    printf("Age: %d\n", age); // Should print 20, try %o, %x, %X

    // 2. Declare a float variable named 'height' and assign it the value 1.75
    float height = /* TODO: assign a value */;
    printf("Height: %.2f\n", height); // Should print 1.75, try %.3f, %10.5f

    // 3. Declare a string (character array) named 'name' and assign it "Alice"
    char name[] = "Alice";
    // TODO: Fill in the correct format specifier to print the string
    printf("Name: ___\n", name); // Hint: what letter stands for "string"?
    // Should print: Name: Alice

    return 0;
}
