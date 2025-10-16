#include <stdio.h>

int main() { 
    int c = 14 & 12;
    printf("c = %d\n", c);

    c = 14 && 12;
    printf("c = %d\n", c);

    int i;
    i = 0;
    printf("i = %d\n", ++i);

    i = 0;
    printf("i = %d\n", i++);

    return 0;
}
