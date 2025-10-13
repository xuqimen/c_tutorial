# C Programming Tutorial for Beginners

A comprehensive hands-on tutorial covering essential C programming concepts with practical examples and exercises. Perfect for beginners learning C from scratch.

## Tutorial Structure

Each topic is contained in its own directory with:
- Commented source code (.c files)
- Makefile for easy compilation
- In-class quiz sections for practice

## Topics Overview

### 1. Hello World (5-10 min)
**Directory:** `01_hello_world`

Learn the basic structure of a C program, understand the main function, and use printf().

```bash
cd 01_hello_world
make
./hello
```

### 2. Variables and Data Types (10-15 min)
**Directory:** `02_variables_datatypes`

Explore int, float, double, and char data types. Learn about variable declaration, initialization, and the sizeof() operator.

```bash
cd 02_variables_datatypes
make
./datatypes
```

### 3. Input and Output (10 min)
**Directory:** `03_input_output`

Master scanf() for user input and printf() format specifiers. Build a simple calculator.

```bash
cd 03_input_output
make
./calculator
```

### 4. Operators (10 min)
**Directory:** `04_operators`

Work with arithmetic, relational, and logical operators. Create a temperature converter.

```bash
cd 04_operators
make
./temperature
```

### 5. Conditional Statements (15 min)
**Directory:** `05_conditionals`

Learn if-else statements, switch-case, and nested conditionals. Build a grade calculator and menu system.

```bash
cd 05_conditionals
make
./grades_menu
```

### 6. Loops (15 min)
**Directory:** `06_loops`

Master for, while, and do-while loops. Understand break and continue statements. Create a number guessing game.

```bash
cd 06_loops
make
./loops_demo
```

### 7. Arrays (15 min)
**Directory:** `07_arrays`

Learn array declaration, initialization, and manipulation. Work with multi-dimensional arrays.

```bash
cd 07_arrays
make
./arrays_demo
```

### 8. Strings (10 min)
**Directory:** `08_strings`

Understand strings as character arrays. Use string functions like strlen, strcpy, strcmp, and strcat.

```bash
cd 08_strings
make
./strings_demo
```

### 9. Functions (15 min)
**Directory:** `09_functions`

Create reusable code with functions. Learn about parameters, return values, and recursion.

```bash
cd 09_functions
make
./functions_demo
```

### 10. Pointers Basics (15 min)
**Directory:** `10_pointers_basics`

Introduction to pointers, address-of (&) and dereference (*) operators. Understand pass by reference.

```bash
cd 10_pointers_basics
make
./pointers_demo
```

### 11. Dynamic Memory Allocation (15 min)
**Directory:** `11_dynamic_memory`

Learn malloc(), calloc(), realloc(), and free(). Understand dynamic arrays, memory leaks, and best practices.

```bash
cd 11_dynamic_memory
make
./dynamic_memory
```

## How to Use This Tutorial

### Prerequisites
- GCC compiler installed
- Make utility installed
- Basic command-line knowledge

### Building Programs

Each directory contains a Makefile with the following targets:

```bash
make        # Compile the program
make run    # Compile and run the program
make clean  # Remove compiled files
```

### Learning Approach

1. **Read the code**: Each program is heavily commented
2. **Compile and run**: See the examples in action
3. **Complete quizzes**: Test your understanding with in-class exercises
4. **Experiment**: Modify the code and see what happens

### In-Class Quizzes

Each program includes quiz sections marked with comments:
```c
// ========================================
// IN-CLASS QUIZ: Complete the following
// ========================================
```

Uncomment these sections and fill in the blanks to practice what you've learned.

## Teaching Tips

### Pacing (2-hour session)
- Spend 5-15 minutes per topic as indicated
- Encourage students to type along
- Review quiz answers together
- Leave time for questions

### Interactive Elements
- Live coding demonstrations
- Students complete quiz sections
- Group problem-solving
- Debugging exercises

### Key Concepts to Emphasize
- **Memory management**: How variables are stored
- **Type safety**: Why data types matter
- **Control flow**: How programs make decisions
- **Code reusability**: Benefits of functions
- **Pointer fundamentals**: Memory addresses and references

## Additional Resources

### Compiling Manually
If you prefer not to use make:
```bash
gcc -Wall -Wextra -std=c99 -c filename.c -o filename.o
gcc -Wall -Wextra -std=c99 -o filename filename.o
./filename
```

### Common Errors and Solutions

1. **"command not found"**: Make sure gcc and make are installed
2. **"undefined reference"**: Check function prototypes and definitions
3. **Segmentation fault**: Often caused by accessing invalid memory (null pointers, array bounds)
4. **Memory leaks**: Always free() dynamically allocated memory
5. **Double free**: Don't free() the same pointer twice

## Next Steps

After completing this tutorial, students should:
- Practice writing small programs independently
- Explore structs and file I/O
- Study more advanced pointer concepts (pointer arithmetic, function pointers)
- Learn about data structures (linked lists, trees, stacks, queues)
- Understand memory management best practices
- Build real projects to apply knowledge

## License

This tutorial is provided for educational purposes. Feel free to use and modify for teaching.

---

Happy Coding!
