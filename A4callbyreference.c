#include <stdio.h>

// User-defined function to swap two numbers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    // Input from user
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    // Before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Function call (call by reference)
    swap(&x, &y);

    // After swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
/*
OUTPUT
Enter two numbers:
33
89
Before swapping: x = 33, y = 89
After swapping: x = 89, y = 33
*/