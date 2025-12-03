/* Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */
#include <stdio.h>

int main() {
    for(int i = 0; i < 5; i++) {
        for(int s = 0; s < 4 - i; s++) printf(" ");
        for(int j = 5 - i; j <= 5; j++) printf("%d", j);
        printf("\n");
    }
    return 0;
}
