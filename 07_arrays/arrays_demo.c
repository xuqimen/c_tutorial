/*
 * Topic: Arrays
 *
 * This program demonstrates:
 * - Array declaration and initialization
 * - Accessing array elements
 * - Iterating through arrays
 * - Multi-dimensional arrays
 * - Common array operations
 */

#include <stdio.h>

int main() {
    printf("=== Arrays Demo ===\n\n");

    // ========================================
    // ARRAY BASICS
    // ========================================
    printf("=== Array Declaration and Initialization ===\n");

    // Method 1: Declare size and initialize later
    int numbers[5];
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Method 2: Initialize at declaration
    int scores[5] = {85, 92, 78, 90, 88};

    // Method 3: Let compiler determine size
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Array 'numbers': ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    // ========================================
    // ACCESSING ARRAY ELEMENTS
    // ========================================
    printf("=== Accessing Array Elements ===\n");
    printf("First score: %d\n", scores[0]);
    printf("Last score: %d\n", scores[4]);
    printf("Third score: %d\n", scores[2]);
    printf("\n");

    // Array size calculation
    int size = sizeof(scores) / sizeof(scores[0]);
    printf("Number of elements in scores: %d\n\n", size);

    // ========================================
    // READING ARRAY FROM USER
    // ========================================
    printf("=== Reading Array Elements ===\n");
    int grades[5];
    printf("Enter 5 test scores:\n");

    for (int i = 0; i < 5; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    printf("\nYou entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", grades[i]);
    }
    printf("\n\n");

    // ========================================
    // ARRAY OPERATIONS: Find Max and Min
    // ========================================
    printf("=== Finding Maximum and Minimum ===\n");

    int max = grades[0];
    int min = grades[0];

    for (int i = 1; i < 5; i++) {
        if (grades[i] > max) {
            max = grades[i];
        }
        if (grades[i] < min) {
            min = grades[i];
        }
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n\n", min);

    // ========================================
    // CALCULATING AVERAGE
    // ========================================
    printf("=== Calculating Average ===\n");

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += grades[i];
    }

    float average = (float)sum / 5;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n\n", average);

    // ========================================
    // SEARCHING IN ARRAY
    // ========================================
    printf("=== Searching in Array ===\n");
    int search_value;
    printf("Enter a value to search: ");
    scanf("%d", &search_value);

    int found = 0;  // Flag variable
    int position = -1;

    for (int i = 0; i < 5; i++) {
        if (grades[i] == search_value) {
            found = 1;
            position = i;
            break;
        }
    }

    if (found) {
        printf("Found %d at index %d (position %d)\n\n", search_value, position, position + 1);
    } else {
        printf("%d not found in array\n\n", search_value);
    }

    // ========================================
    // MULTI-DIMENSIONAL ARRAYS
    // ========================================
    printf("=== Multi-Dimensional Arrays ===\n");
    printf("3x3 Matrix:\n");

    // 2D array - like a table or matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Printing 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // ========================================
    // STUDENT GRADES TABLE
    // ========================================
    printf("=== Student Grades (3 students, 4 subjects) ===\n");

    int student_grades[3][4] = {
        {85, 90, 78, 92},  // Student 1
        {88, 76, 95, 89},  // Student 2
        {92, 88, 85, 90}   // Student 3
    };

    printf("     Sub1 Sub2 Sub3 Sub4 Avg\n");
    printf("--------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("St%d: ", i + 1);

        int student_sum = 0;
        for (int j = 0; j < 4; j++) {
            printf("%4d ", student_grades[i][j]);
            student_sum += student_grades[i][j];
        }

        float student_avg = (float)student_sum / 4;
        printf("%.1f\n", student_avg);
    }
    printf("\n");

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("=== Quiz Time! ===\n");

    // Quiz 1: Declare an array of 10 integers named 'data'
    // YOUR CODE HERE:
    // int data[___];

    // Quiz 2: Initialize an array with values 5, 10, 15, 20, 25
    // int values[] = {___, ___, ___, ___, ___};

    // Quiz 3: What is the index of the last element in an array of size 10?
    // Answer: ___

    // Quiz 4: Write code to reverse an array
    // int arr[5] = {1, 2, 3, 4, 5};
    // YOUR CODE HERE (use a loop and temporary variable)

    // Quiz 5: Find how many elements are greater than average
    // Given: int nums[5] = {10, 20, 30, 40, 50};
    // Step 1: Calculate average
    // Step 2: Count elements > average
    // YOUR CODE HERE

    printf("Complete the quiz sections above!\n");

    return 0;
}
