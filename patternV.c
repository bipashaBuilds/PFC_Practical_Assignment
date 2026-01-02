#include <stdio.h>
int main() {
    int i, j;
    int height = 5;  
    int width = 10;  
    for(i = 0; i < height; i++) {
        for(j = 0; j < width; j++) {
            if(j == i || j == width - i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
  return 0;
}
/*
OUTPUT

*   *
*   *
*   *
 * *
  *
*/

