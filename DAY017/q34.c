/* Write a program to check if a number is prime. */
#include <stdio.h>

int main() {
    int n, i, flag = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n <= 1) flag = 0;
    else {
        for(i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if(flag) printf("Prime\n");
    else printf("Not Prime\n");

    return 0;
}
