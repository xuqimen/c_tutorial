/*
 * Topic: Loops
 *
 * This program demonstrates:
 * - for loop
 * - while loop
 * - do-while loop
 * - break and continue statements
 * - Nested loops
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("=== Loops Demo ===\n\n");

    // ========================================
    // FOR LOOP
    // ========================================
    printf("=== For Loop ===\n");
    printf("Counting from 1 to 5:\n");

    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Multiplication table
    printf("=== Multiplication Table Generator ===\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication table for %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    printf("\n");

    // ========================================
    // WHILE LOOP
    // ========================================
    printf("=== While Loop ===\n");
    printf("Countdown from 5:\n");

    int countdown = 5;
    while (countdown > 0) {
        printf("%d... ", countdown);
        countdown--;
    }
    printf("Blast off!\n\n");

    // Sum of numbers
    printf("=== Sum Calculator (enter 0 to stop) ===\n");
    int num, sum = 0;

    printf("Enter numbers to add (0 to finish):\n");
    scanf("%d", &num);

    while (num != 0) {
        sum += num;
        printf("Current sum: %d\n", sum);
        printf("Enter next number: ");
        scanf("%d", &num);
    }
    printf("Final sum: %d\n\n", sum);

    // ========================================
    // DO-WHILE LOOP
    // ========================================
    printf("=== Do-While Loop ===\n");
    printf("(Loop executes at least once)\n\n");

    int choice;
    do {
        printf("Menu:\n");
        printf("1. Option A\n");
        printf("2. Option B\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected Option A\n\n");
                break;
            case 2:
                printf("You selected Option B\n\n");
                break;
            case 3:
                printf("Exiting menu...\n\n");
                break;
            default:
                printf("Invalid choice! Try again.\n\n");
        }
    } while (choice != 3);

    // ========================================
    // BREAK AND CONTINUE
    // ========================================
    printf("=== Break Statement ===\n");
    printf("Finding first number divisible by 7:\n");

    for (int i = 1; i <= 100; i++) {
        if (i % 7 == 0) {
            printf("Found: %d\n", i);
            break;  // Exit loop immediately
        }
    }
    printf("\n");

    printf("=== Continue Statement ===\n");
    printf("Printing odd numbers from 1 to 10:\n");

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skip rest of loop body, go to next iteration
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // ========================================
    // NESTED LOOPS
    // ========================================
    printf("=== Nested Loops: Pattern Printing ===\n");
    printf("Right triangle pattern:\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // Multiplication table grid
    printf("Multiplication table (1-5):\n");
    printf("   ");
    for (int i = 1; i <= 5; i++) {
        printf("%4d", i);
    }
    printf("\n");
    printf("   ----------------\n");

    for (int i = 1; i <= 5; i++) {
        printf("%2d |", i);
        for (int j = 1; j <= 5; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    printf("\n");

    // ========================================
    // PRACTICAL EXAMPLE: Number Guessing Game
    // ========================================
    printf("=== Number Guessing Game ===\n");
    srand(time(NULL));  // Seed random number generator
    int secret = rand() % 100 + 1;  // Random number 1-100
    int guess, attempts = 0;

    printf("I'm thinking of a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret) {
            printf("Too low! Try again.\n\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n\n");
        } else {
            printf("Correct! You guessed it in %d attempts!\n\n", attempts);
        }
    } while (guess != secret && attempts < 10);

    if (guess != secret) {
        printf("Game over! The number was %d\n\n", secret);
    }

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("=== Quiz Time! ===\n");

    // Quiz 1: Write a for loop to print even numbers from 2 to 10
    // for (___; ___; ___) {
    //     printf("%d ", i);
    // }

    // Quiz 2: What's the difference between while and do-while?
    // Answer: ___________

    // Quiz 3: Write a loop to calculate factorial of 5 (5! = 5*4*3*2*1)
    // int factorial = 1;
    // for (___) {
    //     factorial *= ___;
    // }

    // Quiz 4: What does this loop print?
    // for (int i = 0; i < 5; i++) {
    //     if (i == 2) continue;
    //     printf("%d ", i);
    // }
    // Answer: ___________

    // Quiz 5: Write nested loops to print this pattern:
    // 1
    // 1 2
    // 1 2 3
    // YOUR CODE HERE

    printf("Complete the quiz sections above!\n");

    return 0;
}
