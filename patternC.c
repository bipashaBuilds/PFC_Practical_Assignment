#include <stdio.h>
int main() {
int row, col;
for (row = 0; row < 7; row++) {
        for (col = 0; col < 5; col++) {
            if ((row == 0 && col > 0) ||
                (row == 6 && col > 0) ||
                (col == 0 && row > 0 && row < 6))
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
 ****
*    
*    
*    
*    
*    
 ****
*/