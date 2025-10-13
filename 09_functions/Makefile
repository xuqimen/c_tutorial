# Makefile for Functions example
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Target executable
TARGET = functions_demo

# Object files
OBJS = functions_demo.o

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

# Clean up compiled files
clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all run clean
