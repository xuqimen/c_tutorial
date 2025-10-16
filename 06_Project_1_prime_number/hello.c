/*
 * PROJECT 1: Prime Number Finder
 *
 * OBJECTIVE:
 * Write a program that finds and displays all prime numbers within a given range.
 *
 * CONCEPTS NEEDED:
 * - Variables and data types (Topic 2)
 * - Input/Output with printf() (Topic 3)
 * - Operators (Topic 4)
 * - Conditional statements (Topic 5)
 * - Loops (Topic 6)
 *
 * WHAT IS A PRIME NUMBER?
 * A prime number is a natural number greater than 1 that has no positive
 * divisors other than 1 and itself.
 * Examples: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29...
 *
 * YOUR TASK:
 * Complete the code below to find all prime numbers between 2 and 100.
 * Follow the step-by-step instructions in the comments.
 */

#include <stdio.h>

int main() {
    // Step 1: Declare variables
    // - nprime: to count how many prime numbers we find (initialize to 0)
    // - a: starting number (set to 2)
    // - b: ending number (set to 100)

    // YOUR CODE HERE:
    int nprime = 0;
    int a = 2;
    int b = 100;


    // Step 2: Create a loop to check each number from a to b
    // HINT: Use a for loop with variable i

    // YOUR CODE HERE:
    for (int i = a; i <= b; i++) {

        // Step 3: For each number i, assume it's prime initially
        // Create a variable 'isprime' and set it to 1 (true)

        // YOUR CODE HERE:
        int isprime = 1;


        // Step 4: Check if i is divisible by any number from 2 to i-1
        // If i is divisible by any j, then i is NOT prime
        // HINT: Use a nested for loop with variable j
        // HINT: Use the modulo operator (%) to check divisibility
        // HINT: If you find a divisor, set isprime to 0 and break

        // YOUR CODE HERE:






        // Step 5: After checking all possible divisors,
        // if isprime is still 1, then i is prime
        // Print the prime number and increment nprime counter

        // YOUR CODE HERE:




    }

    // Step 6: Print the total count of prime numbers found
    printf("There are %d prime numbers between %d and %d\n", nprime, a, b);

    return 0;
}

/*
 * TESTING YOUR PROGRAM:
 *
 * Expected output for range 2 to 100:
 * 2 is prime
 * 3 is prime
 * 5 is prime
 * 7 is prime
 * ... (and so on)
 * 97 is prime
 * There are 25 prime numbers between 2 and 100
 *
 * BONUS CHALLENGES (optional):
 * 1. Modify the program to accept user input for the range (a and b)
 * 2. Optimize: Only check divisors up to the square root of i
 * 3. Skip even numbers after 2 (they can't be prime)
 * 4. Display primes in a formatted table (e.g., 5 numbers per row)
 */
