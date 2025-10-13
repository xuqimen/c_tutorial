/*
 * Topic: Strings
 *
 * This program demonstrates:
 * - Character arrays as strings
 * - String initialization
 * - String input/output
 * - String functions (strlen, strcpy, strcmp, strcat)
 * - String manipulation
 */

#include <stdio.h>
#include <string.h>  // For string functions

int main() {
    printf("=== Strings Demo ===\n\n");

    // ========================================
    // STRING BASICS
    // ========================================
    printf("=== String Declaration ===\n");

    // Method 1: Character array with null terminator
    char str1[20] = "Hello";

    // Method 2: Explicit character array
    char str2[] = {'W', 'o', 'r', 'l', 'd', '\0'};  // \0 is null terminator

    // Method 3: String literal
    char str3[] = "C Programming";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n\n", str3);

    // ========================================
    // STRING INPUT
    // ========================================
    printf("=== String Input ===\n");
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);  // Reads until whitespace (no & needed for arrays)

    printf("Hello, %s!\n\n", name);

    // Reading line with spaces (getchar to consume newline from previous scanf)
    getchar();
    char full_name[50];
    printf("Enter your full name: ");
    fgets(full_name, sizeof(full_name), stdin);  // Safer for strings with spaces

    // Remove newline character that fgets includes
    full_name[strcspn(full_name, "\n")] = '\0';

    printf("Welcome, %s!\n\n", full_name);

    // ========================================
    // STRING LENGTH: strlen()
    // ========================================
    printf("=== String Length ===\n");

    char message[] = "Programming";
    int length = strlen(message);

    printf("String: \"%s\"\n", message);
    printf("Length: %d characters\n\n", length);

    // ========================================
    // STRING COPY: strcpy()
    // ========================================
    printf("=== String Copy ===\n");

    char source[] = "Hello World";
    char destination[50];

    strcpy(destination, source);
    printf("Source: %s\n", source);
    printf("Destination: %s\n\n", destination);

    // ========================================
    // STRING CONCATENATION: strcat()
    // ========================================
    printf("=== String Concatenation ===\n");

    char first[50] = "Hello";
    char second[] = " World";

    strcat(first, second);  // Appends second to first
    printf("Concatenated: %s\n\n", first);

    // ========================================
    // STRING COMPARISON: strcmp()
    // ========================================
    printf("=== String Comparison ===\n");

    char pass1[] = "password";
    char pass2[] = "password";
    char pass3[] = "PASSWORD";

    printf("Comparing \"%s\" and \"%s\": %d\n", pass1, pass2, strcmp(pass1, pass2));
    printf("(0 means equal, <0 means first < second, >0 means first > second)\n");

    if (strcmp(pass1, pass2) == 0) {
        printf("Passwords match!\n");
    } else {
        printf("Passwords don't match!\n");
    }

    printf("\nComparing \"%s\" and \"%s\": %d\n", pass1, pass3, strcmp(pass1, pass3));
    printf("(Case matters!)\n\n");

    // ========================================
    // STRING MANIPULATION: Reversing a string
    // ========================================
    printf("=== String Reversal ===\n");

    char original[50];
    printf("Enter a word to reverse: ");
    scanf("%s", original);

    int len = strlen(original);
    char reversed[50];

    // Reverse the string
    for (int i = 0; i < len; i++) {
        reversed[i] = original[len - 1 - i];
    }
    reversed[len] = '\0';  // Don't forget null terminator!

    printf("Original: %s\n", original);
    printf("Reversed: %s\n\n", reversed);

    // ========================================
    // PALINDROME CHECKER
    // ========================================
    printf("=== Palindrome Checker ===\n");

    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);

    int word_len = strlen(word);
    int is_palindrome = 1;  // Assume it's a palindrome

    for (int i = 0; i < word_len / 2; i++) {
        if (word[i] != word[word_len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("\"%s\" is a palindrome!\n\n", word);
    } else {
        printf("\"%s\" is not a palindrome.\n\n", word);
    }

    // ========================================
    // CHARACTER ARRAY MANIPULATION
    // ========================================
    printf("=== Character Array Manipulation ===\n");

    char text[] = "hello world";
    printf("Original: %s\n", text);

    // Convert first character to uppercase
    if (text[0] >= 'a' && text[0] <= 'z') {
        text[0] = text[0] - 32;  // ASCII difference between lowercase and uppercase
    }

    printf("Modified: %s\n\n", text);

    // ========================================
    // COUNTING VOWELS
    // ========================================
    printf("=== Vowel Counter ===\n");

    char sentence[100];
    getchar();  // Consume newline
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int vowel_count = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = sentence[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel_count++;
        }
    }

    printf("Number of vowels: %d\n\n", vowel_count);

    // ========================================
    // IN-CLASS QUIZ: Complete the following
    // ========================================
    printf("=== Quiz Time! ===\n");

    // Quiz 1: What is the output?
    // char s[] = "Hello";
    // printf("%d\n", strlen(s));
    // Answer: ___

    // Quiz 2: What's wrong with this code?
    // char str[5] = "Hello";
    // Answer: ___________ (hint: where's the null terminator?)

    // Quiz 3: Write code to count spaces in a string
    // char text[] = "Hello World Program";
    // int spaces = 0;
    // YOUR CODE HERE

    // Quiz 4: Write code to check if two strings are equal (without strcmp)
    // char str1[] = "test";
    // char str2[] = "test";
    // YOUR CODE HERE

    // Quiz 5: Convert all characters in a string to uppercase
    // char str[] = "hello";
    // YOUR CODE HERE (hint: check each character and subtract 32 if lowercase)

    printf("Complete the quiz sections above!\n");

    return 0;
}
