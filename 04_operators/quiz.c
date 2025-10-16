/*
 * Quiz: Operators in C
 * Instructions: Uncomment and fill in the blanks to make the code work as described.
 */
#include <stdio.h>

int main() {
    printf("=== Operators Quiz ===\n\n");

    // ========================================
    // PART 1: ARITHMETIC OPERATORS
    // ========================================
    printf("=== Part 1: Arithmetic Operators ===\n");

    // 1. Calculate the remainder when 17 is divided by 5
    // TODO: use modulo operator
    // int remainder = 17 ___ 5;
    // printf("17 %% 5 = %d\n", remainder);

    // 2. Calculate the average of three numbers: 80, 90, 100
    // TODO: Use floating point division
    // float average = (80 + 90 + 100) / ___;
    // printf("Average: %.2f\n\n", average);


    // ========================================
    // PART 2: INCREMENT/DECREMENT OPERATORS
    // ========================================
    printf("=== Part 2: Increment/Decrement ===\n");

    // 3. Predict the output before uncommenting
    int x = 10;
    // printf("x = %d\n", x);
    // printf("x++ = %d\n", x++);  // What prints? x = ___
    // printf("x = %d\n", x);      // What prints? x = ___
    // printf("++x = %d\n", ++x);  // What prints? x = ___
    // printf("x = %d\n\n", x);    // What prints? x = ___


    // ========================================
    // PART 3: RELATIONAL OPERATORS
    // ========================================
    printf("=== Part 3: Relational Operators ===\n");

    // 4. Check if a number is within a range (10 to 20 inclusive)
    int num = 15;
    // if (/* TODO: check if num >= 10 AND num <= 20 */) {
    //     printf("%d is within range [10, 20]\n\n", num);
    // }


    // ========================================
    // PART 4: LOGICAL OPERATORS
    // ========================================
    printf("=== Part 4: Logical Operators ===\n");

    // 5. Determine if someone can get a student discount
    // Conditions: age between 13 and 22 (inclusive)
    int age = 18;
    // if (/* TODO: use logical operators to check age range */) {
    //     printf("Eligible for student discount\n\n");
    // }

    // 6. Check if a year is a leap year
    // Rules: divisible by 4 AND (NOT divisible by 100 OR divisible by 400)
    int year = 2024;
    // if (/* TODO: write leap year condition */) {
    //     printf("%d is a leap year\n\n", year);
    // }


    // ========================================
    // PART 5: OPERATOR PRECEDENCE
    // ========================================
    printf("=== Part 5: Operator Precedence ===\n");

    // 7. Predict the result (calculate mentally first!)
    int result1 = 10 + 5 * 2;      // result1 = ___
    int result2 = (10 + 5) * 2;    // result2 = ___
    int result3 = 20 / 4 * 2;      // result3 = ___
    int result4 = 20 / (4 * 2);    // result4 = ___

    // printf("10 + 5 * 2 = %d (expected: ___)\n", result1);
    // printf("(10 + 5) * 2 = %d (expected: ___)\n", result2);
    // printf("20 / 4 * 2 = %d (expected: ___)\n", result3);
    // printf("20 / (4 * 2) = %d (expected: ___)\n\n", result4);


    // ========================================
    // PART 6: PRACTICAL APPLICATION
    // ========================================
    printf("=== Part 6: Practical Problem ===\n");

    // 8. Write a program to check if a number is:
    //    - Even or Odd
    //    - Positive, Negative, or Zero
    int number = -8;

    // TODO: Check if even or odd using modulo operator
    // if (/* condition */) {
    //     printf("%d is even\n", number);
    // } else {
    //     printf("%d is odd\n", number);
    // }

    // TODO: Check if positive, negative, or zero using relational operators
    // if (/* condition */) {
    //     printf("%d is positive\n\n", number);
    // } else if (/* condition */) {
    //     printf("%d is negative\n\n", number);
    // } else {
    //     printf("%d is zero\n\n", number);
    // }


    // ========================================
    // BONUS CHALLENGE
    // ========================================
    printf("=== Bonus Challenge ===\n");

    // 9. Swap two numbers WITHOUT using a third variable
    // Hint: Use arithmetic operators
    int p = 5, q = 10;
    printf("Before swap: p = %d, q = %d\n", p, q);

    // TODO: Swap p and q without using a temp variable
    // p = /* expression */;
    // q = /* expression */;
    // p = /* expression */;

    // printf("After swap: p = %d, q = %d\n", p, q);

    return 0;
}

/*
 * ANSWERS KEY (for instructor):
 * 1. 17 % 5 = 2
 * 2. (80 + 90 + 100) / 3.0 = 90.00
 * 3. x++ = 10, x = 11, ++x = 12, x = 12
 * 4. num >= 10 && num <= 20
 * 5. age >= 13 && age <= 22
 * 6. (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)
 * 7. result1 = 20, result2 = 30, result3 = 10, result4 = 2
 * 8. Even: number % 2 == 0, Positive: number > 0, Negative: number < 0
 * 9. p = p + q; q = p - q; p = p - q;
 */