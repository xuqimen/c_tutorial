# Makefile for Conditionals example
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Target executable
TARGET = grades_menu

# Object files
OBJS = grades_menu.o

# Default target
all: $(TARGET)

# Build the executable from object files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Build object files from source
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Run the program
run: $(TARGET)
	./$(TARGET)

# Compile quiz.c
quiz: quiz.c
	$(CC) $(CFLAGS) quiz.c -o quiz

# Clean up compiled files
clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all run clean
