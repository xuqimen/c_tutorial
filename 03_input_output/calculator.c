/*
 * Topic: Input and Output
 *
 * This program demonstrates:
 * - Using scanf() to get user input
 * - Format specifiers for different data types
 * - Basic calculator operations
 * - Formatted output with printf()
 */

#include <stdio.h>

int main() {
    int num1, num2;
    float float_num1, float_num2;
    char operator;

    printf("=== Simple Calculator ===\n\n");

    // Getting integer input
    printf("Enter first number (integer): ");
    scanf("%d", &num1);  // Note the & (address-of) operator

    printf("Enter second number (integer): ");
    scanf("%d", &num2);

    printf("\nYou entered: %d and %d\n\n", num1, num2);

    // Performing basic operations
    printf("=== Integer Operations ===\n");
    printf("Addition:       %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction:    %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    // Check for division by zero
    if (num2 != 0) {
        printf("Division:       %d / %d = %d (integer division)\n", num1, num2, num1 / num2);
        printf("Remainder:      %d %% %d = %d\n\n", num1, num2, num1 % num2);
    } else {
        printf("Division:       Cannot divide by zero!\n\n");
    }

    // Getting float input for more precise calculations
    printf("=== Float Operations ===\n");
    printf("Enter first number (decimal): ");
    scanf("%f", &float_num1);

    printf("Enter second number (decimal): ");
    scanf("%f", &float_num2);

    printf("\nFloat calculations:\n");
    printf("Addition:    %.2f + %.2f = %.2f\n", float_num1, float_num2, float_num1 + float_num2);
    printf("Subtraction: %.2f - %.2f = %.2f\n", float_num1, float_num2, float_num1 - float_num2);
    printf("Multiply:    %.2f * %.2f = %.2f\n", float_num1, float_num2, float_num1 * float_num2);

    if (float_num2 != 0) {
        printf("Division:    %.2f / %.2f = %.2f\n\n", float_num1, float_num2, float_num1 / float_num2);
    } else {
        printf("Division:    Cannot divide by zero!\n\n");
    }

    // Demonstrating different format specifiers
    printf("=== Format Specifiers Demo ===\n");
    printf("%%d (integer):           %d\n", num1);
    printf("%%f (float):             %f\n", float_num1);
    printf("%%.2f (2 decimals):      %.2f\n", float_num1);
    printf("%%e (scientific):        %e\n", float_num1);
    printf("%%c (character):         %c\n", 'A');

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("\n=== Quiz Time! ===\n");

    // Quiz 1: Declare a variable to store the user's age
    // YOUR CODE HERE:
    // int age;

    // Quiz 2: Prompt the user and read the age
    // YOUR CODE HERE:
    // printf("Enter your age: ");
    // scanf("___", &age);  // Fill in the correct format specifier

    // Quiz 3: Print the age with a message
    // YOUR CODE HERE:
    // printf("You are ___ years old\n", age);

    // Quiz 4: What's wrong with this code?
    // scanf("%d", num1);  // Missing something important!
    // Answer: ___________

    printf("Complete the quiz sections above!\n");

    return 0;
}
