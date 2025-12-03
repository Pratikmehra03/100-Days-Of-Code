/* Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   * */
#include <stdio.h>

int main() {
    int n = 4; /* number of rows in half (excluding middle) */
    for(int i = 0; i < n; i++) {
        for(int s = 0; s < n - i; s++) printf(" ");
        for(int j = 0; j < 2*i+1; j++) printf("*");
        printf("\n");
    }
    for(int i = n-2; i >= 0; i--) {
        for(int s = 0; s < n - i; s++) printf(" ");
        for(int j = 0; j < 2*i+1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
