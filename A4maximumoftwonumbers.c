#include <stdio.h>
// Function to find maximum using pointer arguments
int findMax(int *a, int *b) {
    if (*a > *b)
        return *a;
    else
        return *b;
}

int main() {
    int x, y, max;

    // Input from user
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    // Function call with addresses
    max = findMax(&x, &y);

    // Output
    printf("Maximum number is: %d\n", max);

    return 0;
}
/*
OUTPUT
Enter two numbers:
76
54
Maximum number is: 76

*/