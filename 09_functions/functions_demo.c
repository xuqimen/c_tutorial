/*
 * Topic: Functions
 *
 * This program demonstrates:
 * - Function declaration and definition
 * - Function parameters and return values
 * - Function prototypes
 * - Pass by value
 * - Scope of variables
 */

#include <stdio.h>

// ========================================
// FUNCTION PROTOTYPES (declarations)
// ========================================
// These tell the compiler that these functions exist
void greet(void);
int add(int a, int b);
float calculate_average(int arr[], int size);
int is_prime(int num);
void print_pattern(int rows);
int factorial(int n);
void swap_values(int a, int b);  // This won't work as expected!

// ========================================
// MAIN FUNCTION
// ========================================
int main() {
    printf("=== Functions Demo ===\n\n");

    // ========================================
    // CALLING VOID FUNCTIONS
    // ========================================
    printf("=== Void Functions (no return value) ===\n");
    greet();
    greet();
    printf("\n");

    // ========================================
    // FUNCTIONS WITH RETURN VALUES
    // ========================================
    printf("=== Functions with Return Values ===\n");

    int num1 = 10, num2 = 20;
    int sum = add(num1, num2);

    printf("%d + %d = %d\n", num1, num2, sum);

    // Can use return value directly
    printf("15 + 25 = %d\n\n", add(15, 25));

    // ========================================
    // FUNCTIONS WITH ARRAYS
    // ========================================
    printf("=== Functions with Arrays ===\n");

    int scores[5] = {85, 90, 78, 92, 88};
    float avg = calculate_average(scores, 5);

    printf("Scores: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    printf("\nAverage: %.2f\n\n", avg);

    // ========================================
    // PRACTICAL EXAMPLE: Prime Number Checker
    // ========================================
    printf("=== Prime Number Checker ===\n");

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("%d is a prime number\n\n", number);
    } else {
        printf("%d is not a prime number\n\n", number);
    }

    // ========================================
    // FUNCTIONS CALLING FUNCTIONS
    // ========================================
    printf("=== Functions Calling Functions ===\n");

    int rows;
    printf("Enter number of rows for pattern: ");
    scanf("%d", &rows);

    print_pattern(rows);
    printf("\n");

    // ========================================
    // RECURSIVE FUNCTIONS
    // ========================================
    printf("=== Recursive Function (Factorial) ===\n");

    int n;
    printf("Enter a number for factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers\n\n");
    } else {
        printf("%d! = %d\n\n", n, factorial(n));
    }

    // ========================================
    // PASS BY VALUE DEMONSTRATION
    // ========================================
    printf("=== Pass by Value ===\n");

    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);

    swap_values(x, y);

    printf("After swap:  x = %d, y = %d\n", x, y);
    printf("(Values unchanged - pass by value!)\n\n");

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("=== Quiz Time! ===\n");

    // Quiz 1: Write a function prototype for a function that takes two floats
    //         and returns their product
    // YOUR CODE HERE:
    // float multiply(float ___, float ___);

    // Quiz 2: Write a function that checks if a number is even
    // YOUR CODE HERE:
    // int is_even(int num) {
    //     return ___;
    // }

    // Quiz 3: What will be the output?
    // int func(int x) { return x * 2; }
    // int result = func(5);
    // Answer: result = ___

    // Quiz 4: Write a function to find the maximum of two numbers
    // YOUR CODE HERE

    // Quiz 5: What's wrong with this function?
    // int get_sum(int a, int b) {
    //     int sum = a + b;
    //     // Missing something!
    // }
    // Answer: ___________

    printf("Complete the quiz sections above!\n");

    return 0;
}

// ========================================
// FUNCTION DEFINITIONS
// ========================================

// Simple void function with no parameters
void greet(void) {
    printf("Hello from a function!\n");
}

// Function that takes parameters and returns a value
int add(int a, int b) {
    int result = a + b;
    return result;
}

// Function that works with arrays
float calculate_average(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (float)sum / size;
}

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0;  // Not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }

    return 1;  // Is prime
}

// Function that calls another function
void print_pattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Recursive function
int factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive case
    return n * factorial(n - 1);
}

// This function demonstrates pass by value
// Changes to parameters don't affect original variables
void swap_values(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Inside function: a = %d, b = %d\n", a, b);
    // These changes are local only!
}
