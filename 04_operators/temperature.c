/*
 * Topic: Operators
 *
 * This program demonstrates:
 * - Arithmetic operators (+, -, *, /, %)
 * - Relational operators (==, !=, <, >, <=, >=)
 * - Logical operators (&&, ||, !)
 * - Increment/Decrement operators (++, --)
 */

#include <stdio.h>

int main() {
    printf("=== Operators Demo ===\n\n");

    // ========================================
    // ARITHMETIC OPERATORS
    // ========================================
    printf("=== Arithmetic Operators ===\n");
    int a = 10, b = 3;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (integer division)\n", a / b);
    printf("a %% b = %d (remainder)\n\n", a % b);

    // ========================================
    // TEMPERATURE CONVERTER
    // ========================================
    printf("=== Temperature Converter ===\n");
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("%.2f°C = %.2f°F\n\n", celsius, fahrenheit);

    // ========================================
    // RELATIONAL OPERATORS
    // ========================================
    printf("=== Relational Operators ===\n");
    int x = 5, y = 10;

    printf("x = %d, y = %d\n", x, y);
    printf("x == y: %d (0=false, 1=true)\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("x < y:  %d\n", x < y);
    printf("x > y:  %d\n", x > y);
    printf("x <= y: %d\n", x <= y);
    printf("x >= y: %d\n\n", x >= y);

    // Temperature comparison
    if (celsius < 0) {
        printf("Temperature is below freezing!\n");
    } else if (celsius >= 0 && celsius < 20) {
        printf("Temperature is cool.\n");
    } else if (celsius >= 20 && celsius < 30) {
        printf("Temperature is comfortable.\n");
    } else {
        printf("Temperature is hot!\n");
    }
    printf("\n");

    // ========================================
    // LOGICAL OPERATORS
    // ========================================
    printf("=== Logical Operators ===\n");
    int age = 25;
    int has_license = 1;  // 1 = true, 0 = false

    printf("age = %d, has_license = %d\n", age, has_license);

    // AND operator (&&) - both must be true
    printf("Can drive? (age >= 18 && has_license): %d\n", age >= 18 && has_license);

    // OR operator (||) - at least one must be true
    printf("Is student or senior? (age < 18 || age >= 65): %d\n", age < 18 || age >= 65);

    // NOT operator (!) - inverts the value
    printf("Is minor? (!(age >= 18)): %d\n\n", !(age >= 18));

    // ========================================
    // INCREMENT/DECREMENT OPERATORS
    // ========================================
    printf("=== Increment/Decrement Operators ===\n");
    int counter = 5;

    printf("Initial counter: %d\n", counter);
    printf("counter++: %d (use then increment)\n", counter++);
    printf("After counter++: %d\n", counter);

    printf("++counter: %d (increment then use)\n", ++counter);
    printf("After ++counter: %d\n", counter);

    printf("counter--: %d (use then decrement)\n", counter--);
    printf("After counter--: %d\n", counter);

    printf("--counter: %d (decrement then use)\n", --counter);
    printf("Final counter: %d\n\n", counter);

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("=== Quiz Time! ===\n");

    // Quiz 1: What will this print?
    int q1 = 7 / 2;
    // printf("7 / 2 = ___\n");  // Fill in the answer

    // Quiz 2: What will this print?
    float q2 = 7.0 / 2.0;
    // printf("7.0 / 2.0 = ___\n");  // Fill in the answer

    // Quiz 3: Write an expression to check if a number is even
    int num = 10;
    // if (num ___ ___ == 0) {  // Fill in the blanks
    //     printf("%d is even\n", num);
    // }

    // Quiz 4: What's the value after these operations?
    int quiz_val = 5;
    quiz_val++;
    ++quiz_val;
    quiz_val--;
    // Answer: quiz_val = ___

    // Quiz 5: True or False?
    // (5 > 3 && 10 < 20) evaluates to: ___
    // (5 > 10 || 3 < 2) evaluates to: ___

    printf("Complete the quiz sections above!\n");

    return 0;
}
