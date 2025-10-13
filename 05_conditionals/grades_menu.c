/*
 * Topic: Conditional Statements
 *
 * This program demonstrates:
 * - if, else if, else statements
 * - switch statement
 * - Nested conditionals
 * - Grade calculator and menu system
 */

#include <stdio.h>

int main() {
    printf("=== Conditional Statements Demo ===\n\n");

    // ========================================
    // IF-ELSE STATEMENTS: Grade Calculator
    // ========================================
    printf("=== Grade Calculator ===\n");
    int score;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    // Input validation
    if (score < 0 || score > 100) {
        printf("Error: Score must be between 0 and 100!\n\n");
    } else {
        // Nested if-else to determine grade
        printf("Score: %d\n", score);

        if (score >= 90) {
            printf("Grade: A (Excellent!)\n");
        } else if (score >= 80) {
            printf("Grade: B (Good job!)\n");
        } else if (score >= 70) {
            printf("Grade: C (Satisfactory)\n");
        } else if (score >= 60) {
            printf("Grade: D (Needs improvement)\n");
        } else {
            printf("Grade: F (Failed)\n");
        }

        // Additional feedback based on performance
        if (score >= 70) {
            printf("Status: PASS\n");
        } else {
            printf("Status: FAIL\n");
        }
    }
    printf("\n");

    // ========================================
    // SWITCH STATEMENT: Menu System
    // ========================================
    printf("=== Simple Menu System ===\n");
    printf("Choose an option:\n");
    printf("1. Start Game\n");
    printf("2. Load Game\n");
    printf("3. Settings\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");

    int choice;
    scanf("%d", &choice);

    // Switch statement - useful for multiple discrete values
    switch (choice) {
        case 1:
            printf("Starting new game...\n");
            break;  // Important! Without break, it "falls through"

        case 2:
            printf("Loading saved game...\n");
            break;

        case 3:
            printf("Opening settings menu...\n");
            break;

        case 4:
            printf("Exiting game. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please select 1-4.\n");
            break;
    }
    printf("\n");

    // ========================================
    // SWITCH WITH CHARACTERS
    // ========================================
    printf("=== Day of Week ===\n");
    printf("Enter first letter of a day (M/T/W/F/S): ");

    char day;
    scanf(" %c", &day);  // Space before %c to skip whitespace

    switch (day) {
        case 'M':
        case 'm':
            printf("Monday - Start of the work week!\n");
            break;

        case 'T':
        case 't':
            printf("Tuesday or Thursday\n");
            break;

        case 'W':
        case 'w':
            printf("Wednesday - Mid-week!\n");
            break;

        case 'F':
        case 'f':
            printf("Friday - Almost weekend!\n");
            break;

        case 'S':
        case 's':
            printf("Saturday or Sunday - Weekend!\n");
            break;

        default:
            printf("Invalid day letter!\n");
            break;
    }
    printf("\n");

    // ========================================
    // NESTED CONDITIONALS
    // ========================================
    printf("=== Movie Ticket Price Calculator ===\n");
    int age;
    char is_student;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &is_student);

    float ticket_price = 12.0;  // Base price

    if (age < 0) {
        printf("Invalid age!\n");
    } else {
        if (age < 12) {
            ticket_price = 8.0;
            printf("Child ticket: $%.2f\n", ticket_price);
        } else if (age >= 65) {
            ticket_price = 9.0;
            printf("Senior ticket: $%.2f\n", ticket_price);
        } else {
            // Adult pricing with student discount
            if (is_student == 'y' || is_student == 'Y') {
                ticket_price = 10.0;
                printf("Adult student ticket: $%.2f\n", ticket_price);
            } else {
                printf("Adult ticket: $%.2f\n", ticket_price);
            }
        }
    }
    printf("\n");

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("=== Quiz Time! ===\n");

    // Quiz 1: Write an if-else to check if a number is positive, negative, or zero
    // int num = 5;
    // if (___) {
    //     printf("Positive\n");
    // } else if (___) {
    //     printf("Negative\n");
    // } else {
    //     printf("Zero\n");
    // }

    // Quiz 2: What's wrong with this switch statement?
    // switch (score) {
    //     case 90:
    //         printf("A");
    //         // Missing something here!
    //     case 80:
    //         printf("B");
    // }
    // Answer: ___________

    // Quiz 3: Write a condition to check if a year is a leap year
    // A year is a leap year if:
    // - Divisible by 4 AND not divisible by 100, OR divisible by 400
    // int year = 2024;
    // if (___) {
    //     printf("Leap year\n");
    // }

    // Quiz 4: What will this print if x = 5?
    // if (x > 3)
    //     printf("A");
    //     printf("B");  // Is this part of the if?
    // Answer: ___________

    printf("Complete the quiz sections above!\n");

    return 0;
}
