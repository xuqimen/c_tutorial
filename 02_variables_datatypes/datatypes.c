/*
 * Topic: Variables and Data Types
 *
 * This program demonstrates:
 * - Declaring and initializing variables
 * - Basic data types: int, float, double, char
 * - Using sizeof() operator
 * - Variable overflow behavior
 */

#include <stdio.h>
#include <limits.h>  // For INT_MAX, INT_MIN constants

int main() {
    // Integer data type - whole numbers
    int age = 25;
    int year = 2024;

    // Float - single precision decimal numbers
    float temperature = 98.6f;
    float pi = 3.14159f;

    // Double - double precision decimal numbers (more accurate)
    double distance = 384400.5;
    double scientific = 6.022e23;  // Scientific notation

    // Character data type
    char grade = 'A';
    char initial = 'C';

    printf("=== Variables and Data Types Demo ===\n\n");

    // Displaying values
    printf("Integer examples:\n");
    printf("  age = %d years\n", age);
    printf("  year = %d\n\n", year);

    printf("Float examples:\n");
    printf("  temperature = %.1f°F\n", temperature);
    printf("  pi = %.5f\n\n", pi);

    printf("Double examples:\n");
    printf("  distance = %.1f km (Earth to Moon)\n", distance);
    printf("  Avogadro's number = %.3e\n\n", scientific);

    printf("Character examples:\n");
    printf("  grade = %c\n", grade);
    printf("  initial = %c\n\n", initial);

    // sizeof() operator - shows memory size in bytes
    printf("=== Size of Data Types ===\n");
    printf("  int:    %ld bytes\n", sizeof(int));
    printf("  float:  %ld bytes\n", sizeof(float));
    printf("  double: %ld bytes\n", sizeof(double));
    printf("  char:   %ld bytes\n\n", sizeof(char));

    // Integer range demonstration
    printf("=== Integer Ranges ===\n");
    printf("  INT_MAX = %d\n", INT_MAX);
    printf("  INT_MIN = %d\n\n", INT_MIN);

    // Overflow demonstration
    printf("=== Overflow Example ===\n");
    int max_int = INT_MAX;
    printf("  Maximum int value: %d\n", max_int);
    printf("  Adding 1 causes overflow: %d\n", max_int + 1);
    printf("  (Notice it wraps to negative!)\n\n");

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("=== Quiz Time! ===\n");
    printf("Try completing the following:\n\n");

    // Quiz 1: Declare an integer variable called 'score' and set it to 100
    // YOUR CODE HERE:
    // int score = ___;

    // Quiz 2: Declare a float variable called 'price' and set it to 19.99
    // YOUR CODE HERE:
    // float price = ____;

    // Quiz 3: Declare a char variable called 'letter' and set it to 'Z'
    // YOUR CODE HERE:
    // char letter = ___;

    // Quiz 4: Print the score variable (uncomment after completing Quiz 1)
    // YOUR CODE HERE:
    // printf("Score: %d\n", score);

    // Quiz 5: What would be the result of: int x = 5 / 2; ?
    // Answer: x = ___ (not 2.5!)
    // Reason: Integer division truncates the decimal part

    printf("Uncomment and complete the quiz sections above!\n");

    return 0;
}
