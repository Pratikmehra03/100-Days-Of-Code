/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */
#include <stdio.h>

int main() {
    int n = 5; /* top half has 5 rows of odd numbers */
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < 2*i-1; j++) printf("*");
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--) {
        for(int j = 0; j < 2*i-1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
