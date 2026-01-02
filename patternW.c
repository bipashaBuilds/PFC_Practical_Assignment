#include <stdio.h>
int main() {
    int row, col;
for (row = 0; row < 7; row++) {
        for (col = 0; col < 7; col++) {
            if (col == 0 || col == 6 ||
               (row >= 3 && row == col) ||
               (row >= 3 && col + row == 6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}
/*
OUTPUT

*   *
*   *
* * *
** **
*   *

*/
