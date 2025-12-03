/* Write a program to find the product of odd digits of a number. */
#include <stdio.h>

int main() {
    int n, prod = 1, hasOdd = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 0) {
        int d = n % 10;
        if(d % 2 == 1) {
            prod *= d;
            hasOdd = 1;
        }
        n /= 10;
    }

    if(hasOdd)
        printf("Product = %d\n", prod);
    else
        printf("No odd digits\n");

    return 0;
}
