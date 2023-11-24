#include <stdio.h>

int main() {
    // Variable
    int variable = 42;
    printf("Value of variable: %d\n", variable);

    // Pointer
    int *pointer = &variable; // storing the address of the variable
    printf("Value of variable via pointer: %d\n", *pointer);
    printf("Value of variable via pointer: %p\n", pointer);

    return 0;
}