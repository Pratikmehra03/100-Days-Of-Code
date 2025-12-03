/* Write a program to print binary representation of a number. */
#include <stdio.h>

int main() {
    int n, bin[32], i = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("0");
        return 0;
    }

    while(n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }

    for(int j = i-1; j >= 0; j--)
        printf("%d", bin[j]);

    return 0;
}
